Sure, here is the equivalent C++ code for your Golang program. 

```cpp
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";
    std::ostringstream oss;
    oss << std::replace_format_placeholders(str, &txt);
    std::cout << oss.str() << std::endl;
    return 0;
}
```
In this C++ code, we're using the `std::ostringstream` class to create a string stream that we can use to replace format placeholders in a string with values. Note that you may need to include a library such as "fmt" or "ostream" to be able to `Sprintf()`.
Please ensure to replace '&' operator by the required language operator for variable references depending on your language.
