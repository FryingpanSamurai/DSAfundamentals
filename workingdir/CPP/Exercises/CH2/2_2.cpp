#include <iostream>
#include <cmath>
using namespace std;

/****************************************************************
 * FUNCTION:  Compute the volume of a cylinder                  *
 * INPUT:     <double> radius, <double> length                  *
 * OUTPUT:    The calculated volume of a cylinder.              *
 ****************************************************************/

class Cylinder{
  public:
    Cylinder(double r, double l) : radius_(r), length_(l) {}
    double radius_;
    double length_;

    double computeVolume() {
      const double PI = 3.14159;
      double area = radius_ * radius_ * PI;
      return area * length_;
    }
};

int main() {
  double cylinderRadius;
  double cylinderLength;

  cout << "Please enter radius of cylinder: ";
  cin >> cylinderRadius;
  cout << "Please enter length of cylinder: ";
  cin >> cylinderLength;

  Cylinder c(cylinderRadius, cylinderLength);
  cout << "Volume: " << c.computeVolume();
  return 0;
}