**Error:** The `std::format` function is not available in C++ without including the `<format>` header.

**Fix:** Include the `<format>` header to enable the `std::format` function.

**Corrected Code:**

```cpp
#include <iostream>
#include <string>
#include <format>

int main() {
  std::string little = "little";

  // Using format string with {} placeholders
  std::cout << "Mary had a " + little + " lamb." << std::endl;

  // Using format string with positional arguments
  std::cout << little << " had a " << "Mary" << " lamb." << std::endl;

  // Using format string with named arguments
  std::cout << std::format("{} had a {} lamb", "Mary", "little") << std::endl;

  return 0;
}
```
