Here is your Python code converted to C++. This code follows the requirements exactly, prepending a string literal onto another string variable:

```cpp
#include <iostream>
#include <string>

int main() {

    std::string s = "123 456 78";
    std::string prefix = "0";

    s = prefix + s; // by concatenation

    std::cout << s << std::endl;

    return 0;
}
```
This C++ code performs the same operations as your Python code: it creates a string variable `s` equal to any text value, prepends the string literal `"0"` onto another string literal `s`, and prints out the resulting string.
