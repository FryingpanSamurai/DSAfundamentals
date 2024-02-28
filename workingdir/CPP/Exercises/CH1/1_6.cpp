#include <iostream>
using namespace std;

int main() {
  int mysum;
  /** SUMMATION OF (FIRST 10) ODD NUMBERS */
  for (int i = 1; i < 20; i += 2) {
    cout << i << ", ";
    mysum += i;
  }
  cout << "First 10 odd numbers sum: " << mysum;
  return 0;
}