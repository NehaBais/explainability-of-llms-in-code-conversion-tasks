 Here is the code in C++:
```
#include <iostream>
using namespace std;
int main() {
   int a, b;  // Get the 2 numbers from command line arguments
   cin >> a >> b;
   
   int sum = a + b;         // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
   int difference = a - b;  // The result of subtracting 'b' from 'a'
   int product = a * b;     // The result of multiplying 'a' and 'b'
   
   // Division is performed using the integer division operator '/'.
   // If you want to perform floating-point division, use the '/' operator instead.
   int quotient = a / b; 
   int remainder = a % b; 
   
   cout << "a + b = " << sum << endl;
   cout << "a - b = " << difference << endl;
   cout << "a * b = " << product << endl;
   cout << "quotient of a / b = " << quotient << endl;   // truncates towards 0
   cout << "remainder of a / b = " << remainder << endl;   // same sign as first operand
   
   return 0;
}
```
Note that in C++, you can use the `/` operator for both integer and floating-point division, so you don't need to use `std::div`. Also, you don't need to specify a variable type for `a` and `b`, as they are automatically deduced by the compiler.
