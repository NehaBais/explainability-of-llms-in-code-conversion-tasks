```cpp
#include <iostream>
#include <string>
#include <format>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";
    std::string out = std::format(str, txt);
    std::cout << out << std::endl;

    return 0;
}
```
