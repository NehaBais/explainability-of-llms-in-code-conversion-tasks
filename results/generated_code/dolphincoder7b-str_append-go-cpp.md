```cpp
#include <iostream>
#include <string>
 
int main() {
    std::string s = "foo";
    s += "bar";
    std::cout << s;
    return 0;
}
```

Note: The C++11 and later versions include the `std::string_view` type which is an alternative to `const char*` for string literals. In this example, however, we are using a simple `std::string`. If you need to handle strings larger than a few hundred characters, consider using `std::string_view` instead of `std::string`.
