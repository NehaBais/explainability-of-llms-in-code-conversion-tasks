The given Rust code is not using command line arguments. Therefore, here's how you can convert it into C++ code that also takes input from the user and does not include error handling:

```cpp
#include <iostream>

int main() {
    // taking inputs from user 
    int A, b;
    std::cout << "Enter first integer: ";
    std::cin >> A;
    std::cout << "Enter second integer: ";
    std::cin >> b;

    // calculating and printing the result
    std::cout << "sum:              " << (A + b) << std::endl;
    std::cout << "difference:       " << (A - b) << std::endl;
    std::cout << "product:          " << (A * b) << std::endl;

    // for quotient, truncates towards zero and C++ uses floor division for it 
    int quotient = A / b;
    std::cout << "integer quotient: " << quotient << std::endl;

    // For remainder, same sign as the first operand (A)
    int remainder = A % b;
    std::cout << "remainder:        " << remainder << std::endl;

    return 0;
}
```

This C++ code does the same calculations as the Rust code and doesn't include any error handling. It uses `floor division` for integer quotient because it rounds towards negative infinity in C++, which is similar to how it rounds in Rust.
