Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string s = "12345678";
    s = "0" + s;  // by concatenation
    std::cout << s;
    return 0;
}
```

This C++ code creates a string `s` equal to the text value "12345678". It then prepends another string literal "0" to it using concatenation and outputs the result.
