The error occurred because the `std::filesystem` library was not included at compile time. The fix is to add `-lstdc++fs` compiler flag when compiling this code on some platforms, such as macOS. Here's the corrected code:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
  try {
    fs::create_directories("./path/to/dir");
  } catch (const std::exception &e) {
    std::cerr << "An error occurred: " << e.what() << '\n';
    return 1;
  }

  return 0;
}
```
