 The error is due to the missing inclusion of the standard I/O library (`<iostream>`). To fix this, include the necessary header file. Here's the corrected code:

```c++
#include <iostream>
#include <string>

int main() {
  std::string str = "abc";
  std::cout << str << std::endl;
  str += "def";
  std::cout << str << std::endl;
  return 0;
}
```
