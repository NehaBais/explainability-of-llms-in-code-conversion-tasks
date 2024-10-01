```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "my String";
    std::string cstr = "Changed ";
    std::string dup = cstr + str;

    std::cout << dup << std::endl;

    return 0;
}
```
