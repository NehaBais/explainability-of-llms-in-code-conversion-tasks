```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "12345678";
    s = "0" + s;  // by concatenation
    std::cout << s;
    return 0;
}
```
