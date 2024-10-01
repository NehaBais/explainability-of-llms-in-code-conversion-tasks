The C++ code is as follows:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter two integers: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << endl;  // truncates towards 0
    cout << a << " % " << b << " = " << a%b << endl; // same sign as first operand
    // no built-in exponentiation operator, use third party libraries or write custom function for this purpose
    return 0;
}
```
This C++ code does the exact same operations as the Golang code. The division and modulus operations in this C++ version behave just like the division operation in the original GoLang code - they truncate towards zero, and the modulus operation gives a result that has the same sign as the first operand. There's no built-in exponentiation operator in C++, but third party libraries or custom functions can be used for this purpose.
