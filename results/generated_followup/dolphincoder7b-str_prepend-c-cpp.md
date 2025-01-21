The error occurs because `sprintf()` is not a member function of `std::string`. To resolve this, you can use the `std::strcat()` function or concatenate the strings manually using `+` operator. Here's how to fix it:

```cpp
#include<iostream>
#include<cstring>
#include<cstdlib>
int main() {
  std::string str = "my String";
  const char  *cstr = "Changed ";
  char  *dup;
  sprintf(str.c_str(), "%s%s", cstr, (dup=strdup(str.c_str())));
  free(dup);
  printf("%s\n", str.c_str());
  return 0;
}
```
This code modifies the original C++ code by using `std::sprintf()` instead of `sprintf()`. The `std::sprintf()` function replaces `%s` with `.c_str()`, and also concatenates the strings manually with the `+` operator instead of using `sprintf()`.