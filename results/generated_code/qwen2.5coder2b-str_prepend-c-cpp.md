```cpp
#include<iostream>
#include<string>

int main()
{
    std::string str = "my String";
    std::string *cstr = new std::string("Changed ");
    std::string *dup;
    dup = new std::string(str);
    *dup += cstr->c_str();
    delete dup;
    std::cout << str << "\n";
    return 0;
}
```
