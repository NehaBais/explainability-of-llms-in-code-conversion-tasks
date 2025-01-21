To convert this C code to C++, you can use string concatenation, but the syntax is slightly different. C++ does not have a built-in feature like Python's f-strings for string interpolation, but you can achieve similar functionality using `std::string` and the `+` operator or stream insertion (`<<`). Here is how you can do it:

```cpp
#include <iostream>
#include <string>

int main() {
  std::string extra = "little";
  std::string result = "Mary had a " + extra + " lamb.";
  std::cout << result << std::endl;
  return 0;
}
```

Alternatively, you can use `std::ostringstream` for a more streamlined approach:

#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string extra = "little";
  std::ostringstream oss;
  oss << "Mary had a " << extra << " lamb.";
  std::string result = oss.str();
  std::cout << result << std::endl;
  return 0;
}

Both versions will give you the same output as the original C code. The first version concatenates the strings using the `+` operator, while the second version uses a string stream to achieve the same effect.
