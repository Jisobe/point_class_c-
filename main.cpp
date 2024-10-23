#include <iostream>
#include "Point.h"
using namespace std;

int main(){

// test case 1:
  cout << "Testing case 1" << endl << "Expected output: Not equal" << endl;
  Point firstCase1{ 10, 20 };
  Point secondCase1{ 12, 21 };
  cout << "Actual output: ";
  if (firstCase1 == secondCase1) {
    cout << "equal" << endl;
  }
  else {
    cout << "not equal" << endl;
  }
  // output:

// test case 2:
  cout << endl << "Testing case 2" << endl << "Expected output: First is less than second" << endl;
  Point firstCase2{ 10, 20 };
  Point secondCase2{ 12, 21 };
  cout << "Actual output: ";
  if (firstCase2 < secondCase2)
    cout << "first is less than second" << endl;
  // output:

// test case 3:
  cout << endl << "Testing case 3" << endl << "Expected output: first: 10, 20, second: 12, 21" << endl;
  Point firstCase3{ 10, 20 };
  Point secondCase3{ 12, 21 };
  cout << "Actual output: ";
  cout << "first: " << firstCase3 << "," << "second: " << secondCase3 << endl;
  // output:

// test case 4:
  cout << endl << "Testing case 4" << endl << "Expected output: First: 60, 70; Second: 112, 121" << endl;
  Point firstCase4{ 10, 20 };
  Point secondCase4{ 12, 21 };
  cout << "Actual output: ";
  cout << "First:" << firstCase4 + 50 << "; ";
  secondCase4 += 100;
  cout << "Second:" << secondCase4 << endl;
  // output:

  return 0;
}