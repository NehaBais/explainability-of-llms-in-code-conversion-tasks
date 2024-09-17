The following C++ code does the same thing as your Rust code. It prompts the user to enter two integers, and then outputs whether they are less than, equal to, or greater than each other:

```cpp
#include <iostream>

int main() {
    std::cout << "Enter two integers: ";
    int A, b;
    std::cin >> A >> b;
    if (A < b) {
        std::cout << A << " is less than " << b << std::endl;
    } else if (A == b) {
        std::cout << A << " equals " << b << std::endl;
    } else {
        std::cout << A << " Is greater than " << b << std::endl;
    };
    return 0;
}
```

To run this program in a terminal, save it as a .cpp file, then compile and run the output executable.
