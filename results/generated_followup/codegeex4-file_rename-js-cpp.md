The error occurs because `std::filesystem` is not part of the C++ standard library until C++17. The compiler cannot find the `filesystem` namespace, hence the error.

To fix this issue, you need to use a compiler that supports C++17 and enable the corresponding language extension in your build system.

Here's the corrected code:

```cpp
#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("/input.txt", "/output.txt");

  std::filesystem::rename("docs", "mydocs");
  std::filesystem::rename("/docs", "/mydocs");

  return 0;
}
```
