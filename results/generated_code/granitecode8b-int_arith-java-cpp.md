Here is the code converted from Java to C++:
```
#include 
using namespace std;
int main() {
 int a, b, sum, difference, product, division, remainder;
 
 cout << "Enter two integers: ";
 cin >> a >> b;
 
 sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
 difference = a - b; // The result of subtracting 'b' from 'a'
 product = a * b;    // The result of multiplying 'a' and 'b'
 division = a / b;   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
 remainder = a % b;  // The remainder of dividing 'a' by 'b'
 
 cout << "a + b = " << sum << endl;
 cout << "a - b = " << difference << endl;
 cout << "a * b = " << product << endl;
 cout << "quotient of a / b = " << division << endl;   // truncates towards 0
 cout << "remainder of a / b = " << remainder << endl;   // same sign as first operand
 
 return 0;
}
```
Note: The code assumes that the user will enter two integers. If the user enters non-integer values, the program may crash or produce unexpected results. Error handling should be added to handle such cases.

