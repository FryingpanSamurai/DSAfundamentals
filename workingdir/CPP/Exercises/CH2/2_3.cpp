#include <iostream>
#include <cmath>
using namespace std;

/**************************************************************************
 * FUNCTION:  Convert feet into meters
 * INPUT:     <double>feet
 * OUTPUT:    <double>meters
***************************************************************************/

class Meters{
  public:
    Meters(double f) : feet_(f) {}
    double convertToMeters() {
      // one foot is 0.305 meters
      return feet_ * 0.305;
    }
    double feet_;
};

int main() {
  double myfeet;
  cout << "Please enter feet to convert: ";
  cin >> myfeet;
  Meters m(myfeet);
  cout << m.feet_ << " feet converts to " << m.convertToMeters() << " meters.";
  return 0;
}