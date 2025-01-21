Here is your Golang code converted to C++:

```c++
#include <iostream>
#include <string>

int main() {
    std::string s = "foo";
    s += "bar";
    std::cout << s;
    return 0;
}
```

In this version of the code, I've used a `std::string` instead of a `strings.Builder`, because there is no direct equivalent in C++. However, using the `+=` operator is idiomatic for string concatenation in C++ and it effectively achieves the same result as your Golang code.
