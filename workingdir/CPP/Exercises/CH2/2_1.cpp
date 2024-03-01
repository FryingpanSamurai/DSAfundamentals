#include <iostream>
using namespace std;

class Temperature{
  public:
    Temperature(double t) : celsiusTemp_(t) {}
    double celsiusTemp_;

    double convertToFahrenheit() {
      return (9.0/5) * celsiusTemp_ + 32;
    }
};

int main() {
  // accept input from user for current celsius temperature
  double cTemp;
  cout << "Please enter current temperature in Celsius: ";
  cin >> cTemp;
  Temperature t(cTemp);
  cout << "The current temperature in Fahrenheit is: " << t.convertToFahrenheit();
  return 0;
}