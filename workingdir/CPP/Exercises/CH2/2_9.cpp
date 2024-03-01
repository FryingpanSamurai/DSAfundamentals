#include <iostream>
using namespace std;

// write a program that prompts the user to enter the starting velocity in meters/sec, then ending
// velocity in meters/sec and time span t in seconds, and displays the average acceleration
// avg_accel = (v1 - v0) / t
class AverageAcceleration {
  public:
    // constructor
    AverageAcceleration(double v0, double v1, double ti) : v_0(v0), v_1(v1), t(ti) {}

    double calculateAverage() {
      return (v_1 - v_0)/t;
    }
    double v_0;
    double v_1;
    double t;
};

int main() {
  double rv0, rv1, rt;
  
  cout << "Please enter v0, v1, and time: ";
  cin >> rv0 >> rv1 >> rt;

  AverageAcceleration aa(rv0, rv1, rt);
  cout << "The average acceleration is " << aa.calculateAverage();
  return 0;
}