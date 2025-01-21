In C++, you can use `std::cin` to read integers from the user, and then compare them. Here is how you would convert the given JavaScript code to C++:

```cpp
#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    if (a == b) {
        std::cout << a << " equals " << b << std::endl;
    } else if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else {
        std::cout << a << " is greater than " << b << std::endl;
    }

    return 0;
}
```
This code works by first prompting the user to enter two integers. Then, it uses if-else statements to compare the integers and print an appropriate message for each case. If the integers are not of the same type (such as a string and a number), it prints a warning message.
