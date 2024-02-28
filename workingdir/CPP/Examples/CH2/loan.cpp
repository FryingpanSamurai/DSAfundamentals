#include <iostream>
#include <cmath>
using namespace std;

/************************************************************************************************
 * FUNCTION:  Calculate the monthly payment of loan as well as total paid over life of loan.
 * INPUT:     yearly interest rate, total of loan, life of loan in years
 * OUTPUT:    montly payment and total payment
 ************************************************************************************************/

class Loan{
  public:
    // constructor
    Loan(float i, float l, int d) : interestRateYear_(i), loanTotal_(l), loanDuration_(d) {} 
    // we need variables for user input for annual interest rate, loan amount, number of years of payments
    float interestRateYear_;
    float loanTotal_;
    int loanDuration_;

    float calculateMonthlyPmt() {
      float interestRateMonth = interestRateYear_ / 12;
      return (loanTotal_ * (interestRateMonth))/(1-(1/pow(1 + interestRateMonth, loanDuration_ * 12)));
    }

    float calculateTotalPmt() {
      float monthlyPayment = calculateMonthlyPmt();
      return monthlyPayment * loanDuration_ * 12;
    }
};

int main() {
  float interestRate;
  float loanTotal;
  float loanDuration;

  cout << "Please enter interest rate (#.##): ";
  cin >> interestRate;
  cout << "Please enter loan amount (######.##): ";
  cin >> loanTotal;
  cout << "Please enter number of years of loan: ";
  cin >> loanDuration;

  Loan l(interestRate/100.0, loanTotal, loanDuration);
  cout << "Monthly payment is " << l.calculateMonthlyPmt() << "\n";
  cout << "Total paid will be: " << l.calculateTotalPmt();
  return 0;
}