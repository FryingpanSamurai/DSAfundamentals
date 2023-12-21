#include <iostream>
using namespace std;

/**
 * CLASS:   Equilateral Triangle
 * METHODS: Area and Perimeter
 * 
*/
class Triangle {
  public:
    // constructor that accepts a float param
    Triangle(float s) : side_(s) {}
    
    float area() {
      return 1.732 * ((side_ * side_)/4.0);
    }
    float perimeter() {
      return 3 * side_;
    }
  private:
    float side_;
};

int main() {
  float side;
  cout << "Please enter side length: ";
  cin >> side;
  Triangle t(side);
  cout << "Triangle with side legth: " << side << endl;
  cout << "Area: ";
  cout << t.area() << endl;
  cout << "Perimeter: ";
  cout << t.perimeter() << endl;
  return 0;
}