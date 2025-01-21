To convert the Rust code to C++, you would need to follow these steps:

1. Include necessary headers.
2. Use `std::cin` for input and output operations.
3. Read two integers from the user.
4. Compare the numbers and print the corresponding message.

Here is a step-by-step translation:

```cpp
#include <iostream>
#include <string>

int main() {
    // Create an instance of std::cin to read inputs from the user
    std::cin >> int a >> int b;

    // Using if-else statements for comparison and printing messages
    if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else if (a == b) {
        std::cout << a << " equals " << b << std::endl;
    } else {
        std::cout << a << " is greater than " << b << std::endl;
    }

    return 0;
}
```

Note:
- The `std::cin >> int a >> int b;` line reads two integers into variables `a` and `b`.
- The if-else statements are similar to their Rust counterparts.
- The `std::cout` is used to print the results.
