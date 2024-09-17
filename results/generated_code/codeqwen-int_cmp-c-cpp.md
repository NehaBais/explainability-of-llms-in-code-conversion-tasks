Here's the code converted from C to C++:
```cpp
#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A < B) {
        std::cout << A << " is less than " << B << std::endl;
    } else if(A == B) {
        std::cout << A << " Is equal to " << B << std::endl;
    } else {
        std::cout << A << " Is greater than " << B << std::endl;
    }

    return 0;
}
```
In C++, we use `std::cin` instead of `scanf`, and we also need to specify that the output should be on a new line with `<< std::endl`. The `else if` condition in C++ is used instead of the `if... else` structure in C to achieve the same result.
