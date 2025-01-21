Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    // text assigned to a string variable
    std::string s = "hello";

    // output string variable
    std::cout << s << std::endl;

    // concatenate variable and literal, assign result to another string variable
    std::string s2 = s + " literal";

    // output second string variable
    std::cout << s2 << std::endl;

    return 0;
}
```
In C++, you need to include the `<iostream>` library for input/output operations and `<string>` library for using `std::string` class. Also, notice that you don't need a function like `main()` in C++ because it serves as an entry point of the program.
