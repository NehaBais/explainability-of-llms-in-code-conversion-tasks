Here is the converted code from Python to C++ that satisfies all the given requirements:
```
#include 
using namespace std;
int main() {
 int input1, input2;
 cout << "Enter first integer: ";
 cin >> input1;
 cout << "Enter second integer: ";
 cin >> input2;
 
 int qq = input1 + input2;
 cout << "Sum: 		  " << qq << endl;
 
 int ww = input1 - input2;
 cout << "Difference: 	  " << ww << endl;
 
 int ee = input1 * input2;
 cout << "Product: 	  " << ee << endl;
 
 double rr = static_cast(input1) / static_cast(input2); // integer quotient, rounded towards zero by default
 cout << "Integer quotient: " << static_cast(rr) << endl;
 cout << "Float quotient:   " << rr << endl;
 
 int tt = static_cast(input1) % static_cast(input2); // actual remainder, matches the sign of the first operand
 cout << "Whole Remainder:  " << tt << endl;
 
 doubleuu = (static_cast(tt) / static_cast(input2)) * (-10); // whole quotient multiplied by -10 to indicate its sign
 cout << "Actual Remainder: " << rr + static_cast(uu) << endl;
 
 int yy = pow(input1, input2); // exponentiation
 cout << "Exponentiation:   " << yy << endl;
 
 return 0;
}
```
Note that the C++ code uses `static_cast` to convert between integer and floating-point types. This is necessary because the quotient and remainder operations require floating-point arithmetic, but the input integers are stored as integers. The `pow` function from the `cmath` library is used for exponentiation.

