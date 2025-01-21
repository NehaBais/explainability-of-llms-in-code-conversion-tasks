The error message indicates that the compiler is unable to recognize the "GET A, B AS INTEGER" statement. However, this syntax is used by the JavaScript code to define variables and data types. To fix this issue, we can rewrite the JavaScript code in C++ while adhering to C++'s standard and avoid using type coercion.

Here's a corrected version of the JavaScript code:
```cpp
#include <iostream>  // for input/output operations

// Function to compare two integers
bool compare(int a, int b) {
    if (a == b) {
        std::cout << a << " equals " << b;
        return true;
    } else if (a < b) {
        std::cout << a << " is less than " << b;
        return true;
    } else if (a > b) {
        std::cout << a << " is greater than " << b;
        return true;
    } else {
        return false;  // no equality condition met
    }
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    if (compare(a, b)) {
        std::cout << "\n";  // print newline after comparison
    } else {
        std::cerr << "Error: Values entered are not of the same type.\n";
    }

    return 0;
}
```
This code uses C++'s `std::cin` and `std::cout` libraries to get input from the user and display output. It also includes a separate error handling mechanism using `std::cerr`. The comparison is handled in a function called `compare()` that checks for equality, less than, and greater than conditions using the relational operators `<`, `==`, and `>`. If any condition is met, it prints a corresponding message. Otherwise, an error message is printed.

By following this corrected code, we can achieve the desired comparison without the need to use type coercion.
