Sure! Here's the C++ code that meets your requirements:
```c++
#include 
using namespace std;
 
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 cout << a << " + " << b << " = " << a + b << endl;
 cout << a << " - " << b << " = " << a - b << endl;
 cout << a << " * " << b << " = " << a * b << endl;
 cout << a << " / " << b << " = " << a / b << endl; // truncates towards 0
 cout << a << " %% " << b << " = " << (a % b) << endl; // same sign as first operand
 
 return 0;
}
```
This code uses the input/output streams to read two integers from the user and store them in variables `a` and `b`. Then, it performs the four arithmetic operations you requested and prints the results using the cout statements. The `/` operator in C++ truncates towards zero, so this is consistent with the requirement. The `%` operator returns the remainder of the division between `a` and `b`, which has the same sign as the first operand (since it's the remainder of a division).

