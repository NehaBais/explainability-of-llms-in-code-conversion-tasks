The error message is indicating that the `%` operator cannot be applied to strings, which are not of type `const char*`. In the C++ code, we pass a string literal (`"Mary had a  %s lamb"`) as the first argument in the constructor call, resulting in a string object rather than a pointer.

To fix this issue, we need to ensure that the `%` operator is applied to pointers or arrays, which are of type `const char*`. This can be done by converting the string literals to `const char*` using the `c_str()` method or by casting them to `const char*`.

The corrected code block is as follows:

```cpp
#include <iostream>
#include <string>

int main() {
  std::string adjective  = "little";
  std::string lyric  = std::string(static_cast<const char*>("Mary had a %s lamb"))  % adjective;
  std::cout << lyric  << '\n';  // Mary had a little lamb

  return 0;
}
```
