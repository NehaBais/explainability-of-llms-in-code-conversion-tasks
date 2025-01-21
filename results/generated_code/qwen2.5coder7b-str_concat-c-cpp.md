To convert the given C code to C++, you can use standard string class and its member functions. Here is your converted code:

```cpp
#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2)
{
    return s1 + s2;
}

int main()
{
   std::string s = "hello";
   std::string s2;

   std::cout << s << " literal" << std::endl;
   
   s2 = sconcat(s, " literal");
   std::cout << s2 << std::endl;

   return 0;
}
```

In this C++ version:
- The `sconcat` function concatenates two strings using the `+` operator.
- The output is done using `std::cout`, which is a standard way of printing in C++.
