Here's how you can convert this JavaScript code to C++:

```cpp
#include <iostream>

void compare(int A, int B) {
    if (A==B) std::cout << A << " equals " << B << std::endl;
    if (A < B) std::cout << A << " is less than " << B << std::endl;
    if (A > B) std::cout << A << " Is greater than " << B << std::endl;
}

int main() {
    int A, B;
    std::cout << "Enter two integers: ";
    std::cin >> A >> B;
    compare(A, B);
    return 0;
}
```

In this C++ code, we declare a function called `compare()` that takes two integer arguments. Inside this function, the same comparison operations as in the original JavaScript function are performed using the if Else statements. The `std::cout` and `std::cin` functions are used to handle user input and output respectively. The main() function is where execution begins.
