 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <cstdlib> // For atoi and exit

int main(int argc, char *argv[])
{
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <integer1> <integer2>" << std::endl;
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    if (b == 0) {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
        return 2;
    }

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b (integer quotient) = " << (a / b) << std::endl; // truncates towards zero
    std::cout << "a % b (remainder, sign matches first operand) = " << (a % b) << std::endl; // sign matches the sign of the first operand

    return 0;
}
```

### Explanation:
1. **Input Handling**: The program now uses `std::cin` for input from the user, which is more C++ idiomatic than using command-line arguments in this context. If you prefer to stick with command-line arguments, you can modify the code accordingly.
2. **Division and Modulus**: For division (`a / b`), it truncates towards zero as required by the C++ standard. The modulus operator `%` follows the sign of the first operand.
3. **Output**: The results are printed using `std::cout`, which is idiomatic in C++.
