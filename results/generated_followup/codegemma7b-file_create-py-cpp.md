The error occurs because the `namespace fs` is not included. The fix is to include the necessary header file for the `std::filesystem` namespace.

```cpp
#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  namespace fs = std::filesystem;

  // Current directory
  fs::create_directory(".");

  // Root directory
  fs::create_directory("/");

  return 0;
}
```
