#include <iostream>
using namespace std;

int main() {
  /* PI APPROXIMATION */
  // FORMULA: sqrt(6 + (1^-2 + 2^-2 + 3^-2))
  // init vars for 5 iters and 6 iters
  int iter1 = 0;
  int iter2 = 0;

  cout << "pi approximation 5 iters" << endl;
  cout << "sqrt(6 * (";
  for (int i = 1; i < 6; i++) {
    iter1 += i * 1/i;
    cout << i**-2 << " ";
  }
  return 0;
}