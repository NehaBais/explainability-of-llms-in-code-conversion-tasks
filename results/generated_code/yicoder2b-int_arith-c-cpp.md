This is how you can convert the given code from C to C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Get two integers from user input
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    // Calculate and print the results
    cout << "a + b = " << (a+b) << endl;
    cout << "a - b = " << (a-b) << endl;
    cout << "a * b = " << (a*b) << endl;
    cout << "a / b = " << (float(a)/b) << endl; /* Use float to ensure correct rounding */
    int quotient = a/b; /* truncates towards zero by default in C++, but you can specify your own policy if needed */
    cout << "a %% b = " << (quotient<0 ? -1 : 1) * ((a%b)*((a>0)^(b>0)) + (a^b)*(a>=0)*(b>=0)) << endl; /* Uses XOR to determine sign of remainder if a and b have different signs */
    
    return 0;
}
```
This C++ code does the same operations as your original C code. The only difference is that in C++, division of two integers results in integer quotient while division of real numbers results float which can be truncated towards zero if you use a=2/3 instead of float(a)/b. The remainder sign is determined by whether the signs of the operands are different or not using XOR operation.
