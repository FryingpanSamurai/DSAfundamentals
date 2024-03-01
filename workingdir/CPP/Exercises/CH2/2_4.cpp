#include <iostream>
using namespace std;

class Converter {
  public:
    Converter(double lbs) : pounds_(lbs) {}
    double convertToKg() {
      return pounds_ * 0.454;
    }
    double pounds_;
};

int main() {
  double rPounds;
  cout << "Please enter number of pounds: ";
  cin >> rPounds;
  Converter c(rPounds);
  cout << rPounds << " is " << c.convertToKg() << "kgs.";
  return 0;
}