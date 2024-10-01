The equivalent code in C++ would be:

```cpp
#include<iostream>
#include<string>

int main()
{
    std::string str="Good Morning";
    std::string cstr=" to all";
    std::string cstr2=" !!!";

    //concatenate strings
    str=str+cstr;
    
    //append another string literal
    str=str+cstr2;

    std::cout<<str<<std::endl;

    return 0;
}
```
In C++, it's more idiomatic to use the `+` operator for concatenating strings. The C++ Standard Library includes a `string` class that provides an intuitive and safe way of handling string operations.
