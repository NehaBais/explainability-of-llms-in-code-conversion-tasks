Below is the JavaScript code converted to C++:

```cpp
#include <iostream>
#include <string>


// Function to compare two integers
void compare(int a, int b) {
    if (a == b) 
        std::cout << a << " equals " << b << std::endl;
    else if (a < b) 
        std::cout << a << " is less than " << b << std::endl;
    else 
        std::cout << a << " is greater than " << b << std::endl;
}


int main() {
    // Get two integers from the user.
    int a, b;
    std::cout << "Enter first integer: ";
    std::cin >> a;
    std::cout << "Enter second integer: ";
    std::cin >> b;
  
    // Call the function to compare two integers.
    compare(a, b);

    return 0;
}
```

This C++ code takes input from the user for two integers and then compares them using a comparison operator. It uses standard C++ syntax with `std::cin` and `std::cout`. The function `compare()` checks if both numbers are equal, less than or greater than each other. The result is printed to the console output using `std::cout`.
