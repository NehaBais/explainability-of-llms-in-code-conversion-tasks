Error: `fs` is not declared as a namespace

Fix: Include the necessary header file for C++ filesystem library

Corrected Code:
```cpp
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  if (fs::exists("docs/input.txt") && fs::is_directory("docs"))
    std::cout << "File and directory exist." << std::endl;
  else
    std::cout << "Either file or directory does not exist." << std::endl;

  if (fs::exists("/docs/input.txt") && fs::is_directory("/docs"))
    std::cout << "File and directory exist in root." << std::endl;
  else
    std::cout << "Either file or directory does not exist in root."
              << std::endl;

  return 0;
}
```
