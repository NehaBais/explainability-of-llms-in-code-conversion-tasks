Below is the equivalent C++ code for the provided GoLang code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Display operations
    cout << a << " + " << b << " = " << (a+b) << endl;
    cout << a << " - " << b << " = " << (a-b) << endl;
    cout << a << " * " << b << " = " << (a*b) << endl;

    // Calculate quotient and rounding
    double quotient = double(a)/double(b);
    int truncated_quotient = int(quotient + 0.5));
    cout << a << " / " << b << " = approximately " << truncated_quotient << endl; // truncates towards zero

    return 0;
}
```
This code will take two integer inputs from the user and perform several arithmetic operations on these numbers.

Please note that this conversion assumes certain behavior or rules specific to GoLang, which may not be universally applicable in other programming languages.
