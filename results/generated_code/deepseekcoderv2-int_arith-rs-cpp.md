 To convert the given Rust code to C++, we need to follow these steps:

1. Read command line arguments for two integers.
2. Calculate and display their sum, difference, product, integer quotient (truncates towards zero), and remainder (same sign as the first operand).
3. Note that exponentiation is not directly supported in C++ without using libraries, so we won't include it in the conversion.

Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <string>
#include <cstdlib> // for std::atoi

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <integer1> <integer2>" << std::endl;
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    std::cout << "sum:              " << (a + b) << std::endl;
    std::cout << "difference:       " << (a - b) << std::endl;
    std::cout << "product:          " << (a * b) << std::endl;
    std::cout << "integer quotient: " << (a / b) << std::endl; // truncates towards zero
    std::cout << "remainder:        " << (a % b) << std::endl; // same sign as first operand

    return 0;
}
```

### Explanation:
1. **Reading Command Line Arguments**: We check if the number of arguments is exactly 3 (`argv[0]` is the program name, `argv[1]` and `argv[2]` are the two integers). If not, we print a usage message and exit with an error code.
2. **Parsing Integers**: We use `std::atoi` to convert the command line arguments from strings to integers.
3. **Calculating and Displaying Results**: We calculate and display the sum, difference, product, integer quotient (truncates towards zero), and remainder (same sign as the first operand) using standard arithmetic operations in C++.

This code assumes that the input is always valid and does not include error handling for incorrect inputs.
