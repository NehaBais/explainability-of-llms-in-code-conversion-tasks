Here is your Python code converted to C++:

C++ Note: In C++, we don't get the opportunity to directly typecast and use variables as floats, integers etc. in one line of code like in Python. So, I'm using standard library functions which require typecasting themselves. 

```cpp
#include <iostream>
#include <cmath>

int main() {

    // Get two integers from the user
    int input1 = 18;
    int input2 = 7;

    // Calculate and display their sum, difference, product and integer quotient.
    int qq = input1 + input2;
    std::cout << "Sum: \t\t" <<  qq << std::endl;

    int ww = input1 - input2;
    std::cout << "Difference: \t" << ww << std::endl;

    int ee = input1 * input2;
    std::cout << "Product: \t\t" <<  ee << std::endl;

    // Integer quotient rounds towards zero.
    double rr = static_cast<double>(input1)) / input2;
    std::cout << "Integer quotient: \t" << int(rr) << std::endl;

    // Calculate and display the remainder of input1/input2.
    // The sign of the remainder matches that of the first operand if they are different, or it is indeterminate otherwise.
    double tt = static_cast<double>(input1)) / input2;
    double uu = (int(tt) - float(tt)) * (-10);
    std::cout << "Whole Remainder: \t" << int(uu) << std::endl;

    // Calculate and display the actual remainder of input1/input2.
    std::cout << "Actual Remainder: \t" << uu << std::endl;


    double yy = pow(input1, input2));
    std::cout << "Exponentiation: \t\t" <<  yy << std::endl;

    return 0;
}
```
