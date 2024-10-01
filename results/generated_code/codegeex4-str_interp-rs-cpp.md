```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Mary had a " << "little" << " lamb." << std::endl;
    // You can specify order
    std::cout << "Mary had a " << "little" << " lamb." << std::endl;
    // Or named arguments if you prefer
    std::string name = "Mary";
    std::string adj = "little";
    std::cout << name << " had a " << adj << " lamb." << std::endl;

    return 0;
}
```
