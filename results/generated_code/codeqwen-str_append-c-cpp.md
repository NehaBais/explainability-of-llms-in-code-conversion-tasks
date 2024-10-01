The given code is already in C++. However, it could be shortened by using the `+=` operator to append strings:
```cpp
#include<iostream>
#include<string>

int main()
{
    std::string str = "Good Morning";
    std::string cstr = " to All";
    std::string cstr2 = " !!!";

    // Appending the strings in a more idiomatic way using '+=' operator
    str += cstr;
    str += cstr2;

    std::cout << str << std::endl;

    return 0;
}
```
This program does essentially the same thing as your C code. It creates a string `str` with value "Good Morning", then appends another string to it with values " to All" and " !!!". Then it prints the content of `str`.
