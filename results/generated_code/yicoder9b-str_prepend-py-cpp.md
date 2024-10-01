Sure, here is the equivalent C++ code for your Python code: 

```cpp
#include <iostream>
#include <string>
int main() {
    std::string s = "12345678";
    s = "0" + s;  // by concatenation
    std::cout << s << std::endl;
    return 0;
}
```
In C++, we use `+` for string concatenation. Also remember to include the appropriate libraries (`#include <iostream>` and `#include <string>`) at the beginning of your code.
