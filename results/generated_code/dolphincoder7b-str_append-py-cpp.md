This is how you can convert the Python code to C++ while maintaining functionality and readability. Here's the corresponding C++ code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "12345678";
    str += "9!";
    std::cout << str << std::endl;
    return 0;
}
```

In C++, we use `std::string` instead of Python's string object. Also, we need to include the `<iostream>` library for standard input/output operations. The `+=` operator is used to append a string literal to an existing string in C++ (similar to Python's `+=`). The `<<` operator is used to print the contents of the variable `str`. The `std::endl` adds a newline character at the end of each line, while printing. Finally, we return 0 from `main`, indicating successful execution.

