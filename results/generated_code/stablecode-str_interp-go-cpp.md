Below is the equivalent C++ code for the provided Go code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";
    str = std::regex_replace(str, std::regex("%s"), txt), std::regex("\\%s"), txt);

    std::cout << str << std::endl;
    return 0;
}
```
This C++ code uses `std::regex` and `std::regex_replace` to perform string interpolation similar to Go's `fmt.Sprintf`. This is accomplished by replacing the "%s" in the original string with the variable "txt". The modified string is then printed to the console.
