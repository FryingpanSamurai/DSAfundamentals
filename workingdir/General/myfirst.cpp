// preprocessor directive
// iostream library aka header file 
// (bc its typically included in the head of the program)
#include <iostream>
// namespace is a mechanism used to avoid naming conflict in a large program
using namespace std;

int main() {
  // console output Hello World
  // <<: stream insertion operator
  cout << "Hello World!" << endl;
  cout << "Programming Fun-damentals";
  cout << " is super \"fun\"!" << endl;
  cout << endl;

  // expressions can also be output to console as well as the solution
  cout << "(10.5 + 2 * 3) / (45 - 3.5) = ";
  cout << (10.5 + 2 * 3) / (45 - 3.5) << endl; // these two could be combined into one cout

  double w, h;
  cin >> w >> h; // when cin multiple variables, input is space separated
  cout << w * h;

  const int SIZE = 20;
  return 0;
}