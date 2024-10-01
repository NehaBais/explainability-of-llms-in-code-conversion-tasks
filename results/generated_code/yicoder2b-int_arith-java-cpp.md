This is the equivalent C++ code for your Java program:

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Get the 2 numbers from command line arguments
    int a, b;
    cin >> a >> b;

    // Calculate and print results of arithmetic operations
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << fixed << setprecision(0) << "quotient of a / b = " << (double)(a / b) << endl;  // truncates towards 0
    cout << "remainder of a / b = " << ((a % b) * (a < 0 != b < 0 ? -1 : 1)) << endl; // same sign as first operand if they are different
}
```
Please note that the exponentiation operator (^ in Java, but ^ in C++ is a bitwise XOR operator) doesn't exist in the standard libraries for integer division and modulo operations. Thus, it has been replaced with the equivalent logic.
