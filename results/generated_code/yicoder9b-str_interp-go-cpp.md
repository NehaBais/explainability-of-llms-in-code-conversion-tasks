In C++ you can use the `std::stringstream` and the `replaceAll` function to replace defined character sequences in a string by values or variable values:

```cpp
#include <iostream>
#include <sstream>

std::string replaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

int main() {
    std::stringstream ss;
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";

    str = replaceAll(str, "%s", txt);
    std::cout << str << std::endl;
}
```
