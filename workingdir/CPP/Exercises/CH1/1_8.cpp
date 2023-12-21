#include <iostream>
using namespace std;

/**
 * CLASS:   Equilateral Triangle
 * METHODS: Area and Perimeter
 * 
*/
class Triangle {
  public:
    float area(float s) {
      return 1.732 * ((s*s)/4.0);
    }
    float perimeter(float s) {
      return 3 * s;
    }
};

int main() {
  Triangle t;
  float side;
  cout << "Please enter side length: ";
  cin >> side;
  cout << "Triangle with side legth: " << side << endl;
  cout << "Area: ";
  cout << t.area(side) << endl;
  cout << "Perimeter: ";
  cout << t.perimeter(side) << endl;
  return 0;
}