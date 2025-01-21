Here is a C++ version of your Python code:

```c++
#include <iostream>
using namespace std;

int main() {
    int input1, input2;
    
    cout << "Enter the first integer: ";
    cin >> input1;
    cout << "Enter the second integer: ";
    cin >> input2;

    int sum = input1 + input2;
    cout << "Sum: 		  " << sum << endl;
    int difference = input1 - input2;
    cout << "Difference: 	  " << difference << endl;
    int product = input1 * input2;
    cout << "Product: 	  " << product << endl;

    // Integer quotient rounds towards zero (truncates the decimal part)
    int integerQuotient = input1 / input2;
    cout << "Integer quotient: " << integerQuotient << endl;

    // Remainder has a sign that matches with the second operand
    int remainder = input1 % input2;
    cout << "Remainder: 		  " << remainder << endl;

    // Exponentiation doesn't exist in C++ like in Python, but you can implement it using a loop:
    int exponent = 1;
    for(int i = 0; i < input2; i++) {
        exponent *= input1;
    }
    cout << "Exponentiation:   " << exponent << endl;

    return 0;
}
```

In C++, there is no equivalent operator to Python's "**" for exponentiation. Instead, you can use a loop or the `pow()` function from `<cmath>` library. The result of `a % b` has the same sign as `b`. For division that truncates toward zero (like in Python), use the `/` operator with integer operands.
