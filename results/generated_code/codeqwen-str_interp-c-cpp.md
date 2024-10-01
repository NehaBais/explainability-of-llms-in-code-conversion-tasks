In C++, you can use the `std::string` class which provides a method called `replace()` that allows you to replace specific parts of a string with new values. Here's how you can convert your code from C to C++:

```cpp
#include <iostream>
#include <string>

int main() {
  std::string extra = "little";
  std::string str = "Mary had a X lamb.";

  size_t pos = str.find("X");
  if (pos != std::string::npos) {
    str.replace(pos, 1, extra);
  }

  std::cout << str << "\n";
  return 0;
}
```

In this code, we first find the position of "X" in the string using `find()`, then replace "X" with the value of `extra`. Afterwards, we print out the resultant string.
