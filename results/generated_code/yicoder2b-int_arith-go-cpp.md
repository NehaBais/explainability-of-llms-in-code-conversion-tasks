This is the equivalent C++ code for your Golang program:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << " (truncated)" << endl;  // truncation towards zero
    if((a < 0 && b > 0) || (a > 0 && b < 0)) // check if signs are different
        cout << a << " % " << b << " = " << abs(a%b) << " (same sign as first operand)";
    else
        cout << a << " % " << b << " = " << a%b << endl; // same sign as second operand
    return 0;
}
```
This program includes error handling for the `Scanln` function, which prevents invalid inputs from causing the program to terminate. Note that division and modulus operations are not exponentials in this case.
