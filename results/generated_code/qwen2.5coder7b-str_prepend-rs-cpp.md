Here's how you can convert your Rust code to C++:
```c++
#include <iostream>
#include <string>

int main() {
    std::string s("World");
    s = "Hello " + s;
    std::cout << s << std::endl;
    return 0;
}
```

This C++ code does the same thing as your Rust code. It creates a `std::string` variable, appends another string to it, and then prints out the result using `std::cout`.
