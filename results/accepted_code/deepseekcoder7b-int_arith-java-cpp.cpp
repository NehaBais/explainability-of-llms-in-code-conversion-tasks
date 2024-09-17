#include <iostream>
using namespace std;
int main() {
  int a, b; // Get two integers from user
  cin >> a;
  cin >> b;

  int sum = a + b;        // The result of adding 'a' and 'b'
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'
  int division = a / b; // The result of dividing 'a' by 'b'. Truncates towards
                        // zero. This works because in C++, if a negative number
                        // is being divided evenly by an integer, the quotient
                        // rounds toward zero, matching the Java behavior.

  int remainder =
      a % b; // The remainder of dividing 'a' by 'b'. Same sign as first operand
             // If the signs of 'a' and 'b' are different (which is not covered
             // here), this will give an incorrect result due to C++s modulo
             // operation returning same sign as its second argument.

  cout << "a + b = " << sum << endl;
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;
  cout << "quotient of a / b = " << division << endl; // truncates towards zero
  cout << "remainder of a / b = " << remainder
       << endl; // same sign as first operand

  return 0;
}