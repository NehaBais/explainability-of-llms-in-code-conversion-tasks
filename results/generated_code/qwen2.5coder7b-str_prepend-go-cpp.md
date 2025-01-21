Here's how you can convert that GoLang code into C++:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string s = "world!";
    s = "Hello, " + s;
    
    std::cout << s << std::endl;  // Print out the string

    return 0;
}
```

This C++ code achieves the same result as your GoLang code. It starts by creating a `std::string` variable and initializing it with the value `"world!"`. Then, it prepends another string literal (`"Hello, "`) to this variable using the `+` operator. Finally, it prints out the resulting string to the standard output stream.
