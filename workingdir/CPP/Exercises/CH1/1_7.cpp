#include <iostream>
#include <cmath>
using namespace std;

int main() {
  /* PI APPROXIMATION */
  // FORMULA: sqrt(6 + (1^-2 + 2^-2 + 3^-2))
  // init vars for 5 iters and 6 iters
  // i dont think this is
  double iter1 = 0.0;
  double iter2 = 0.0;

  cout << "pi approximation 5 iters" << endl;
  cout << "sqrt(6 * (";
  // 5 iters
  for (int i = 1; i < 6; i++) {
    iter1 += (1.0/(i*i));
    cout << "1/" << (i*i) << " ";
  }
  cout << "))";
  iter1 = sqrt(6.0*iter1);
  cout << "pi approx at n=5: " << iter1;
  cout << endl;
  cout << "pi approximation 6 iters" << endl;
  // for 6 iters
  for (int i = 1; i < 7; i++) {
    iter2 += (1.0/(i*i));
    cout << "1/" << (i*i) << " ";
  }
  iter2 = sqrt(6.0*iter2);
  cout << "))";
  cout << "pi approx at n=6: " << iter2;
  return 0;
}