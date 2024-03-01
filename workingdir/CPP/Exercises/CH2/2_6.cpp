#include <iostream>
using namespace std;

class Sumdigits {
  public:
    Sumdigits(int mn) : mynumber_(mn) {}
    int sumDigits() {
      int mysum;
      // modulus operator to extract ones, then reduce number
      while (mynumber_ > 0) {
        mysum += mynumber_ % 10;
        mynumber_ = mynumber_ / 10;
      }
      return mysum;
    }
    int mynumber_;
};

int main() {
  int mytest;
  cout << "Please enter a number between 0 and 1000: ";
  cin >> mytest;
  Sumdigits s(mytest);
  cout << "The sum of the digits in " << mytest << " is " << s.sumDigits();
  return 0;
}