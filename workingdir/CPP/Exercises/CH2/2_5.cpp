#include <iostream>
using namespace std;

class Tipper {
  public:
    Tipper(int s, double g) : subtotal_(s), gratuity_(g) {}

    // to calculate gratuity
    // first convert who number into a percentage
    // then multiply that percentage by subtotal
    double calcGratuity() {
      return subtotal_ * (gratuity_ / 100);
    }

    // to calculate bill total
    // add the calculated gratuity to the subtotal
    double billTotal() {
      return subtotal_ + calcGratuity();
    }
    int subtotal_;
    double gratuity_;
};

int main() {
  int rSubtotal;
  double rGratuity;
  cout << "Please enter bill subtotal: ";
  cin >> rSubtotal;
  cout << "Please enter gratuity (as integer): ";
  cin >> rGratuity;
  Tipper t(rSubtotal, rGratuity);
  cout << "The gratuity is $" << t.calcGratuity() << " which brings bill to $" << t.billTotal();
  return 0;
}