#include <iostream>
using namespace std;

/**
 * Write a program that displays the population for each of the next five years
 * Assume current pop is 312032486
 * Year = 365 days
 * 
 * One birth every 7 seconds
 * One death every 13 seconds
 * One new immigrant every 45 seconds
*/
class Population {
  public:
    Population(int p) : pop_(p) {}

    float births_per_year() {
      return ((60*60*24*365)/7.0) ;
    }

    float deaths_per_year() {
      return ((60*60*24*365)/13.0);
    }

    float imm_per_year() {
      return ((60*60*24*365)/45.0);
    }
    int pop_;
};

int main() {
  Population p(312032486);
  cout << "Current population is: " << p.pop_ << endl;
  for (int y = 1; y < 6; y++) {
    p.pop_ = p.pop_ + p.births_per_year() - p.deaths_per_year() + p.imm_per_year();
    cout << "Pop after " << y << " years: " << p.pop_ << endl;
  }
  return 0;
}