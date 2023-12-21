#include <iostream>
using namespace std;

class Square {
  public:
    Square(int s) : side_(s) {}

    int area() {
      return (side_*side_);
    }

    int perimeter() {
      return 4 * side_;
    }
  private:
    int side_;
};

int main() {
  int side;
  cout << "Enter side for square: ";
  cin >> side;
  Square sq(side);
  cout << "Square with side: " << side << endl;
  cout << "Area: " << sq.area() << endl;
  cout << "Perimeter: " << sq.perimeter();
}