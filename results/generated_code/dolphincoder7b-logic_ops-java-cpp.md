The equivalent C++ code for the given Java function is as follows:
```cpp
#include <iostream>
void logic(bool a, bool b) {
    std::cout << "a AND b: " << (a && b) << '\n';
    std::cout << "a OR b: " << (a || b) << '\n';
    std::cout << "NOT a: " << (!a) << '\n';
}
```
In this C++ code, the function `logic` takes two boolean arguments `a` and `b`. It uses the `std::cout` object to output the results of logical operations on these arguments. The operators `&&`, `||`, and `!` are used for "and", "or", and "not" respectively.
Please note that the code assumes that C++ has already been properly set up and includes the `<iostream>` library in order to use `std::cout`. You can replace `std::cout` with any other output stream like `std::cerr`, `std::clog`, etc., according to your requirements.
