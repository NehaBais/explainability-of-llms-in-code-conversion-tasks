Error: `std::filesystem` is not available in this version of C++.

Fix: Update your compiler to a C++17 compatible version or above.

Corrected code:

```cpp
#include <filesystem>
namespace fs = std::experimental::filesystem;

int main() {
  // Rename "input.txt" into "output.txt" in current working directory
  fs::rename("input.txt", "output.txt");

  // Rename "docs" into "mydocs" in current working directory
  fs::rename("docs", "mydocs");

  // Move all files from old directory to new one and delete the old directory
  // In root
  for (const auto &entry : fs::directory_iterator("/root/docs")) {
    if (!entry.is_directory())
      fs::rename(entry, "/root/mydocs/" + entry.path().filename());
  }

  // Remove the empty "docs" directory in root
  fs::remove("/root/docs");

  return 0;
}
```
