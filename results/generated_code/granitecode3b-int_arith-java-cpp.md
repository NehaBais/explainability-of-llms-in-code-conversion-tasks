Sure, here's the C++ code that meets the requirements specified in the Java code:
```cpp
#include 
using namespace std;
 
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 
 int sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
 int difference = a - b; // The result of subtracting 'b' from 'a'
 int product = a * b;    // The result of multiplying 'a' and 'b'
 int quotient = a / b;   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
 int remainder = a % b;  // The remainder of dividing 'a' by 'b'
 

 cout << "a + b = " << sum << endl;
 cout << "a - b = " << difference << endl;
 cout << "a * b = " << product << endl;
 cout << "quotient of a / b = " << quotient << endl;   // truncates towards 0
 cout << "remainder of a / b = " << remainder << endl;   // same sign as first operand
 

 return 0;
}
```
The only difference between the Java and C++ code is that the division operation in C++ uses the '/' operator, while in Java it uses the '/' or '//' operators. Also, the output of the remainder operation in Java includes the sign of both operands, while the C++ output shows only the remainder without the sign.

