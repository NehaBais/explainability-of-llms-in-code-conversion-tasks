Here is the converted code from JavaScript to C++:
```
#include 
using namespace std;
int main(int argc, char* argv[]) {
 int a = stoi(argv[2]);
 int b = stoi(argv[3]);
 
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 double division = static_cast(a) / static_cast(b); // Note that C++ uses floating-point division by default
 int remainder = a % b;
 
 cout << "a + b = " << sum << endl;
 cout << "a - b = " << difference << endl;
 cout << "a * b = " << product << endl;
 cout << "a / b = " << division << endl; // Note that the quotient is a floating-point number
 cout << "a % b = " << remainder << endl;
 
 return 0;
}
```
Note that in C++, the modulo operator `%` returns the remainder after dividing the first operand by the second operand. The sign of the remainder matches the sign of the first operand if they are different, and it matches the sign of the second operand otherwise. Also, note that in C++, division is a floating-point operation by default, so the quotient is a floating-point number even if both operands are integers.

