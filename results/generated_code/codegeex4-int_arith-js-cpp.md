In C++, you can use `std::stoi` to convert command-line arguments to integers. The standard library functions for arithmetic operations are very similar in JavaScript and C++.

Here is the equivalent code:

```cpp
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    // Check if two arguments were provided
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <a> <b>" << std::endl;
        return 1;  // Return a non-zero exit code to indicate error
    }

    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = static_cast<double>(a) / b;  // Use double for the result of division
    int remainder = a % b;

    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;
    std::cout << "a * b = " << product << std::endl;
    std::cout << "a / b = " << division << std::endl;  // The result is floating-point
    std::cout << "a % b = " << remainder << std::endl;

    return 0;
}
```

This code performs the same operations as the JavaScript version, but it's written in C++. It uses `std::stoi` to convert string command-line arguments to integers. Note that if a non-numeric argument is provided, this code will throw an exception. You could add error handling to catch such exceptions if needed.

The division operation uses `double` type for the result to display floating-point numbers, as C++ doesn't automatically promote integer division results to floating-point types.

The modulo operation in C++, like in JavaScript, produces a remainder with the same sign as the dividend. This is known as "truncating towards zero". If you want the remainder's sign to match the divisor, you can modify the code accordingly.
