Here is the C++ version of your code:

```cpp
#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2) {
  std::string s0 = s1 + s2;
  return s0;
}

int main() {
   std::string s = "hello";
   std::string s2;

   /* or */
   std::cout << "\"" << s << "\" literal\n";
   s2 = sconcat(s, std::string(" literal")) ;
   std::cout << s2 << "\n";
  free(s2);
}
```
I've used the C++ standard library string class (`std::string`)) throughout this conversion. This allows for easier manipulation of strings in comparison to the `char*` version from your original C code.
In terms of code functionality, both versions accomplish the same task: concatenating two strings together. However, due to the different ways strings are handled between C and C++, it seemed necessary to make some trade-offs when porting the code over.
