The error occurred because `std::format` is not available by default before C++20.

To fix the issue, include `<format>` and ensure that your compiler supports C++20.

Here's the corrected code:

```cpp
#include <iostream>
#include <string>
#include <format> // Include <format> for std::format

int main() {
  std::string interpolated = std::format("Mary had a {} lamb", "little");
  std::cout << interpolated << std::endl;

  // Specifying order of arguments
  interpolated = std::format("{1} had a {0} lamb", "little", "Mary");
  std::cout << interpolated << std::endl;

  // Using named arguments (not directly supported, but can be simulated with
  // maps)
  std::string name = "Mary";
  std::string adj = "little";
  interpolated =
      std::format("{name} had a {adj} lamb", std::make_pair("name", name),
                  std::make_pair("adj", adj));
  std::cout << interpolated << std::endl;

  return 0;
}
```
