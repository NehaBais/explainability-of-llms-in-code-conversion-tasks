In C++, you can use the following code to compare two integers:
```
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    if (a == b) {
        std::cout << a << " is equal to " << b << std::endl;
    } else if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else if (a > b) {
        std::cout << a << " is greater than " << b << std::endl;
    }
    
    return 0;
}
```
This code will prompt the user to enter two integers, and then compare them using the `==`, `<`, and `>` operators. If the two numbers are equal, it will print a message indicating that they are equal. If the first number is less than the second number, it will print a message indicating that the first number is less than the second number. Similarly, if the first number is greater than the second number, it will print a message indicating that the first number is greater than the second number.

Note that in C++, you can also use the `std::cout` and `std::cin` functions to read and write values to the console, respectively. These are equivalent to the `print()` and `read()` functions used in JavaScript.
