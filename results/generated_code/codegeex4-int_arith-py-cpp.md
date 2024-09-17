```cpp
#include <iostream>
#include <cmath>

int main() {
    int input1, input2;

    std::cout << "Enter the first integer: ";
    std::cin >> input1;
    std::cout << "Enter the second integer: ";
    std::cin >> input2;

    int qq = input1 + input2;
    std::cout << "Sum: \t\t" << qq << std::endl;

    int ww = input1 - input2;
    std::cout << "Difference: \t" << ww << std::endl;

    int ee = input1 * input2;
    std::cout << "Product: \t" << ee << std::endl;

    int rr = input1 / input2;
    float ff = static_cast<float>(input1) / input2; // For getting the actual floating point division
    std::cout << "Integer Quotient: \t" << rr << std::endl;
    std::cout << "Float Quotient: \t" << ff << std::endl;

    float uu = input1 % input2; // For getting the remainder that matches the sign of the first operand
    int vv = abs(input1) % abs(input2); // For getting the remainder that matches the sign of the second operand
    std::cout << "Whole Remainder: \t" << uu << std::endl;
    std::cout << "Actual Remainder: \t" << vv << std::endl;

    int yy = pow(input1, input2);
    std::cout << "Exponentiation: \t" << yy << std::endl;

    return 0;
}
```
The quotient and remainder operators in C++ (the `/` operator and the `%` operator respectively) both follow the Euclidean division algorithm. They round towards zero.

The `pow()` function is used for exponentiation in C++. It takes two arguments: the base, then the power. The result is of type `double`.

Remember to link with math library by adding `-lm` when compiling (`g++ file.cpp -o output -lm`) if using gcc or g++ compiler.

The sign of the remainder `%` operator is determined by the dividend (the first operand), unless both operands are positive or zero, in which case it’s the same as that of the divisor.
