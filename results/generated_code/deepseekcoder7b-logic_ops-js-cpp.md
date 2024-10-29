In C++, the equivalent code would be:

```cpp
#include <iostream> // for std::cout and std::endl

void logic(bool a, bool b) {
    std::cout << "a AND b: "  << (a && b) << std::endl;
    std::cout << "a OR b: "  << (a || b) << std::endl;
    std::cout << "NOT a: "  << (!a) << std::endl;
}
```

In this C++ code, we use the `std::cout` statement to print outputs. Unlike JavaScript's `print()` function, which is not needed in this case. Instead of using logical AND (`&&`), OR(`||`) and NOT(`!`), we use equivalent syntax for boolean operations in C++:

- The AND operation can be achieved by the `&&` operator. It returns true if both operands are true, otherwise it is false.
  
- The OR operation can be achieved using the `||` operator. It returns true if at least one of the two operands is true.

- NOT operation can be performed with the `!` operator which inverts the value of a boolean variable. 

Finally, we use `std::endl` to create a newline after every output statement. This makes it easier to read console outputs in some environments.

