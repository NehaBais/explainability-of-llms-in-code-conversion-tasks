 In C++, the standard library does not provide a direct equivalent for the Unix `rename` function from C's `<stdio.h>`. However, you can use the `std::filesystem` library that was introduced in C++17 to achieve the same result:
```cpp
#include <iostream>
#include <filesystem>

int main() {
  try {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
  } catch (const std::exception& e) {
    std::cerr << "Error occurred: " << e.what() << '\n';
  }
  
  return 0;
}
```
In this code, if any of the `std::filesystem::rename` calls fail (for example, if "input.txt" or "docs" does not exist), an exception is thrown which can be caught and handled appropriately.
