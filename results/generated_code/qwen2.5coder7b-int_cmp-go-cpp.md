Here is the equivalent code in C++:

```cpp
#include <iostream>

int main() {
    int n1, n2;

    std::cout << "Enter number: ";
    if (!(std::cin >> n1)) {
        std::cerr << "Error reading input.";
        return 1;
    }

    std::cout << "Enter number: ";
    if (!(std::cin >> n2)) {
        std::cerr << "Error reading input.";
        return 1;
    }

    if (n1 < n2) {
        std::cout << n1 << " less than " << n2 << std::endl;
    } else if (n1 == n2) {
        std::cout << n1 << " equal to " << n2 << std::endl;
    } else {
        std::cout << n1 << " greater than " << n2 << std::endl;
    }

    return 0;
}
```
In the C++ code, I use `std::cin >>` to read input from the user. If the reading fails (i.e., if the user doesn't enter a valid integer), I print an error message and exit the program. The rest of the logic is equivalent to the Go code.
