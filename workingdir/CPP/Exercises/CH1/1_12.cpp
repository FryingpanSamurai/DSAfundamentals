#include <iostream>
using namespace std;

// duration is 2hrs 9min 30s
// duration in seconds = 2 * 3600 + 9 * 60 + 30 = 540 + 30 = 570
class Vendor {
  public:
    Vendor(float g, float d) : grams_(g), duration_(d) {}

    float avgSales() {
      // get kg per sec metric and then convert to kg per hour
      float kg = grams_ / 1000;
      // kg per sec
      float kgps = kg / (duration_);
      // convert to hours
      return kgps * 3600;
    }
    float grams_;
    float duration_;
};

int main() {
  // grams 5553, duration 2 hrs, 9 min, 30s
  Vendor v(5553, 2 * 3600 + 9 * 60 + 30);
  cout << v.avgSales();
  return 0;
}