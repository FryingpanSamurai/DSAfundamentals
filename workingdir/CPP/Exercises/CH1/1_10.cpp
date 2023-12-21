#include <iostream>
using namespace std;

class Vendor {
  public:
    Vendor(int k) : kgph_(k) {}

    float avg15() {
      // first convert minutes to hour fraction
      // 15 min = 1/4 hr
      // 30 min = 1/2 hr
      // 30 sec = 1/120 hr
      float gph = kgph_ * 1000 * 4.0;
      return gph;
    }

    float avg30() { 
      float gph = kgph_ * 1000 * 2.0;
      return gph;
    }

    float avg30s() {
      float gph = kgph_ * 1000 * 120.0;
      return gph;
    }
  private:
    int kgph_;
};

int main() {
  int kgph = 6;
  Vendor v(kgph);
  float avg = (v.avg15() + v.avg30() + v.avg30s()) / 3.0;
  cout << "Vendor's average grams per hour sold (15min): " << v.avg15() << endl;
  cout << "Vendor's average grams per hour sold (30min): " << v.avg30() << endl;
  cout << "Vendor's average grams per hour sold (30sec): " << v.avg30s() << endl;
  cout << "Vendor's total average: " << avg;
  return 0;
}