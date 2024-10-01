 In C++, you can use the `std::string` and `+=` operator to achieve this. Here's how your code will look like:

```cpp
#include <iostream>
#include <cstring>
#include <cstdlib>

int main() {
    std::string str = "my String";
    char *cstr="Changed ";
    str = cstr + str;  // Prepend the string variable with another string literal.
    std::cout << str;
    return 0;
}
```
