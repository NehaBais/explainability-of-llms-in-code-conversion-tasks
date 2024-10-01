In C++, you can achieve this by using `std::string` objects from the standard library. Here is your Java code converted into a C++ equivalent:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "def";
    str = "abc" + str;
    
    std::cout << str << std::endl;

    return 0;
}
```

In this code, we start by including the necessary headers: `<iostream>` for input/output operations and `<string>` to use the `std::string` class. 

Then in the main function, we declare a string variable `str` and initialize it with "def". We then prepend "abc" before `str` using the "+" operator, which is overloaded for `std::string`. The final result is then printed out to standard output.

This code should compile and run correctly on any C++14-compliant compiler.
