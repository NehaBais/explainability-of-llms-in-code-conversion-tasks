Sure, here's the equivalent C++ code:

```cpp
#include <iostream>

int main() {
    std::cout << "Enter value of a: ";
    int a = std::stoi(std::cin);

    std::cout << "Enter value of b: ";
    int b = std::stoi(std::cin);

    if (a < b) {
        std::cout << "a is less than b" << std::endl;
    } else if (a > b) {
        std::cout << "a is greater than b" << std::endl;
    } else if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    }

    return 0;
}
```

This code first asks the user for two integers, then checks if they are less than, greater than or equal to each other. The `std::stoi` function from `<string>` library is used to convert the user input from a string to an integer before performing the comparison. Note that this code assumes that the user will enter valid integer values. If you need to handle exceptions (e.g., if the user inputs non-integer values), you can add `try-catch` blocks around the input statement.
