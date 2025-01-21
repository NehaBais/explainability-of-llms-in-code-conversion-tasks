To convert the Rust code to C++, you would use `std::string` and `std::stringstream`. However, since C++ strings are mutable by default, appending a string literal is straightforward. Here's how you can do it:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string hello = "Hello world";
    hello += "!!!!";
    std::cout << hello;
    return 0;
}
```

In this code, `hello += "!!!!";` appends the string literal `"!!!!"` to the end of the existing string `hello`. The result is then printed using `std::cout`.
