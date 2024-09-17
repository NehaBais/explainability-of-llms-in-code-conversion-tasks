Here is the converted code from Golang to C++ that satisfies the requirements:
```
#include 
using namespace std;
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 cout << a + b << endl; // sum
 cout << a - b << endl; // difference
 cout << a * b << endl; // product
 cout << static_cast(double>(a) / b) << endl; // quotient (towards 0)
 cout << a % b << endl; // remainder (same sign as first operand)
 return 0;
}
```
Note that in C++, we use `static_cast` to cast the result of division to `double` to get the quotient with decimal places. Also, we use `cin` instead of `fmt.Scanln` to read user input. The exponentiation operator is not supported in C++, so we cannot perform this operation.

