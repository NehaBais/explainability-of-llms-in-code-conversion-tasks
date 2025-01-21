 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <limits> // For numeric_limits

int main() {
    int n1, n2;
    
    std::cout << "Enter number 1: ";
    std::cin >> n1;
    if (std::cin.fail()) {
        std::cerr << "Invalid input for number 1." << std::endl;
        return 1;
    }
    
    std::cout << "Enter number 2: ";
    std::cin >> n2;
    if (std::cin.fail()) {
        std::cerr << "Invalid input for number 2." << std::endl;
        return 1;
    }
    
    if (n1 < n2) {
        std::cout << n1 << " less than " << n2 << std::endl;
    } else if (n1 == n2) {
        std::cout << n1 << " equal to " << n2 << std::endl;
    } else if (n1 > n2) {
        std::cout << n1 << " greater than " << n2 << std::endl;
    }
    
    return 0;
}
```

This C++ code performs the same operations as the provided Go code: it reads two integers from the user, compares them using if-else statements, and prints a message based on their relationship.
