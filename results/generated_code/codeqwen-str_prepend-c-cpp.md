The given code is already in C++. It's converting a char array `str` to a string with the prefix from another variable `cstr`. The change here is that instead of using `free(dup)`, we use `delete[] dup;` to deallocate the memory. In C++, we need to manage our own memory because C++ supports RAII (Resource Acquisition Is Initialization).

The same code in C++ would be:
```cpp
#include<iostream>
#include<string>

int main()
{
    std::string str="my String";
    std::string cstr="Changed ";
    std::string dup(str);
    str=cstr+dup;
    std::cout<<str<<"\n";
    return 0;
}
```
