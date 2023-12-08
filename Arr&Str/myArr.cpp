#include <iostream>
using namespace std;

class Array {
  /*
  FUNCTION: This is a class for the Array data structure.
  DEF:      Element: single item stored in an array.
            Index:   integer, range(0, n-1)
  INPUT:    data as <array>, size as <int>
  METHODS:  TRAVERSE, SORT, SEARCH, INSERT, UPDATE, DELETE
  */
  public:
    // public attributes
    int size_;
    int* data_; //ptr to data attribute

    Array(int sz) {
      size_ = sz;
    }

    int size() const {
      return size_;
    }

    int* getData() const {
      return data_;
    }
};


int main() {
  Array myarray(3);
  cout << myarray.size();
  return 0;
}