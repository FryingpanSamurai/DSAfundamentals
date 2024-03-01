#include <iostream>
using namespace std;

class Converter{
  public:
    Converter(int m) : minutes_(m) {}

    int minutesToDays() {
      // find remainder of division by 365 (a year) to find the days
      return (minutes_ / (60 * 24)) % 365;
    }

    int daysToYears() {
      // find whole number result of division by 365 (a year) to find the years
      return (minutes_ / (60 * 24)) / 365;
    }
    int minutes_;
};

int main() {
  int rMinutes;
  cout << "Please enter number of minutes: ";
  cin >> rMinutes;
  Converter c(rMinutes);
  int days = c.minutesToDays();
  int years = c.daysToYears();
  cout << rMinutes << "minutes is " << years << " years and " << days << " days.";
  return 0;
}