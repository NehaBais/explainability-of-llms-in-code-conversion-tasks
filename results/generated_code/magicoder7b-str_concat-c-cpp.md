 ```cpp
#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2) {
    return s1 + s2;
}

int main() {
   std::string s = "hello";
   std::string s2;

   printf("%s\n", s.c_str());
   
   // or 
   printf("%s%s\n", s.c_str(), " literal");

   s2 = sconcat(s, " literal");
   std::cout << s2 << std::endl;
}
```

In the C++ version of your code:
- `std::string` is used instead of char pointers to hold and manipulate strings.
- `printf` function in C++ uses different format specifier compared to that in C. You don't need the `,` after every print statement.
- C++ has built-in `+` operator for concatenating strings so no more `sconcat` is needed.
- The call to `c_str()` method of a string object is used to get a c style string from it which can be passed into functions expecting const char*.
