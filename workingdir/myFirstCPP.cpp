#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
};

void main() {
    int myInt = 5;
    double myFloat = 10.99;
    char myLetter = 'B';
    string myStr = "Hello Wrld!";
    bool myBool = true;
    int x, y = 6, z = 7; //declare multiple variables with same variable type
    int a, b, c;
    a = b = c = 9; //same value to multiple variables
    /* MULTIPLE LINE
    
       COMMENT...
    */
    const string myConstant = "Immutable String"; //constant variable is immutable and read-only
    Car myCar;
    myCar.brand = "Subaru";
    myCar.model = "Forester";
    myCar.year = 2018;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number was: " << x << "\n";
    cout << myStr << " I am learning C++. I go by " << myLetter << ".\n";
    cout << "I have a " << myCar.year << " " << myCar.brand << " " << myCar.model << ".";
    return ;
}
