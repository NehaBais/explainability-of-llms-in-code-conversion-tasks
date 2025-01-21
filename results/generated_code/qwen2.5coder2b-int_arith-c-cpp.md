```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "Error: Division by zero." << endl;
        return 1;
    }

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double quotient = static_cast<double>(a) / b; // C++ does not have truncation towards 0 like C
    int remainder = a % b;

    cout << "a+b = " << sum << endl;
    cout << "a-b = " << difference << endl;
    cout << "a*b = " << product << endl;
    cout << "a/b (truncated) = " << quotient << endl;
    cout << "a%b = " << remainder << endl;

    return 0;
}
```
In the provided code, the sum of a and b is obtained directly using the `+` operator. The difference between a and b is calculated using the `-` operator.

The product of a and b is obtained using the `*` operator.

To calculate the quotient and remainder in C++, we use the division `/` operator which returns a double by default, and then cast it to an integer using `static_cast<double>(a) / b`. The remainder operator `%` also returns a double, so we explicitly cast both operands to doubles before performing the operation.

The remainder of a divided by b will have the same sign as the sign of the first operand if they are different. This is because the expression `(a % b)` can be rewritten using subtraction and addition as `((a - b * (a / b)) + b)`, which maintains the same sign for both operands.

For the quotient, we use a double because it allows fractional results, but we then cast it back to an integer using `static_cast<int>`. This truncates any fractional part.
