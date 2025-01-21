In C++, you can use the `std::string` class to create a string variable, append another string literal, and display its contents. Here is how you could rewrite your code:

```cpp
#include<iostream>
#include<string>

int main()
{
    std::string str = "Good Morning";
    std::string cstr = " to all";
    std::string cstr2 = " !!!";

    // Append the strings
    str += cstr;
    str += cstr2;

    // Display the contents of the variable after appending
    std::cout << str << std::endl;

    return 0;
}
```

In this C++ code, `std::string` is a class from the Standard Template Library (STL) that provides dynamic strings. The `+=` operator is used to concatenate strings in a very idiomatic and readable way.

Note: Unlike C where you need to ensure there is enough space in your character array when appending strings using functions like `strcat`, with C++'s `std::string`, you don't need to worry about the size of the string as it automatically handles memory.
