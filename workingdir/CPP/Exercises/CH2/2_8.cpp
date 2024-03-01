#include <iostream>
#include <ctime>
using namespace std;

int main() {
  // Obtain the total seconds since the midnight, Jan 1, 1970
  int totalSeconds = time(0);

  // Compute the current second in the minute in the hour
  int currentSecond = totalSeconds % 60;

  // Obtain the total minutes
  int totalMinutes = totalSeconds / 60;

  // Compute the current minute in the hour
  int currentMinute = totalMinutes % 60;

  // Obtain the total hours
  int totalHours = totalMinutes / 60;

  // Compute the current hour
  int currentHour = totalHours % 24;

  // Display results
  int offset;
  cout << "Please enter your time zone offest from GMT: ";
  cin >> offset;
  cout << "Current time is " << currentHour + offset << ":"
  << currentMinute << ":" << currentSecond << "";
  return 0;
}