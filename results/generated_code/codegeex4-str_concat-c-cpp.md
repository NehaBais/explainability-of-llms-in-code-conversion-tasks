In C++, we can use the `std::string` library to do string operations. Here is how you might convert your code:

```cpp
#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2) {
    return s1 + s2;
}

int main() {
   std::string s = "hello";
   
   std::cout << s << std::endl;

   std::string s2 = sconcat(s, " literal");
   
   std::cout << s2 << std::endl;
}
```

This code does the same thing as your original C code. It creates a string `s` with value "hello", then prints it. Then it concatenates " literal" to `s` using the `sconcat()` function and assigns it to `s2`, printing that too.

Note: In this new version, memory allocation is done automatically by the std::string class. Hence there's no need to call free() after sconcat().
