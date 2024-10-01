```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "big";
    // The format function in C++ replaces the first occurrence of "%s" with the string passed.
    size_t pos = str.find("%s");
    if (pos != std::string::npos)
        str.replace(pos, 2, txt);
        
    std::cout << str << std::endl;
    
    return 0;
}
```
