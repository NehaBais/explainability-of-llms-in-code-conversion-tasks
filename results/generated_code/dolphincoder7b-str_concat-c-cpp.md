The following code is written in C++, which can be translated into C without any major changes. The only difference that needs to be made between the two languages is the usage of `std::string` instead of `char *`. Here's the equivalent code:
```cpp
#include  <iostream>
#include  <string>

std::string sconcat(const std::string& s1, const std::string& s2) {
  return s1 + s2;
}

int main() {
   std::string s = "hello";
   
   // The way to print a string in C++ is by using the `<<` operator.
   std::cout << s << "\n";
   
   // In C++, you can concatenate strings with `+` operator instead of `strcat()`.
   std::string s2  = s + " literal";
   std::cout << s2;
}
```
The usage of `std::endl` in C++ has been replaced by `\n` for printing a newline character. In C++, the memory management is managed automatically and you don't need to call `free()`. The conversion process also differs in other aspects such as error handling, but these differences are minor when converting simple code like this one.
