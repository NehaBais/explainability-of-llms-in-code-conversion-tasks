 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    int a, b;
    
    // Get two integers from the user
    std::cout << "Enter first integer: ";
    std::cin >> a;
    std::cout << "Enter second integer: ";
    std::cin >> b;
    
    // Display a message based on the comparison of the two integers
    if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else if (a == b) {
        std::cout << a << " equals " << b << std::endl;
    } else if (a > b) {
        std::cout << a << " is greater than " << b << std::endl;
    }
    
    return 0;
}
```

This C++ code does the following:
1. Reads two integers from the user.
2. Compares the two integers using `if`, `else if`, and `else` statements to determine whether the first integer is less than, equal to, or greater than the second integer.
3. Prints a message based on the comparison result.
