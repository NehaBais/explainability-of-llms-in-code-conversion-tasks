To convert the given JavaScript code to C++, you need to do the following:

1. Include the necessary libraries and header files in C++. The standard library for I/O operations is `iostream`. Add `#include <iostream>` at the beginning of your program to include it.

2. Convert the print statement from JavaScript to C++ using `std::cout`. You can replace `print("... " + ...)` with `std::cout << "... " << ...`.

3. Use the appropriate operators in C++. In this case, `&&` is used for logical and, `||` for logical or, and `!` for logical not.

Here's the converted code:
```
#include <iostream>
void logic(bool a, bool b) {
    std::cout << "a AND b:  " << (a && b);
    std::cout << "\na OR b:   " << (a || b);
    std::cout << "\nNOT a:   " << (!a);
}
```
This C++ code will output the result of "and", "or" and "not" on both arguments.
