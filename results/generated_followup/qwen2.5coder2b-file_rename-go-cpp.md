The error occurs because the C++17 filesystem library is not included, which is necessary for file operations. 

To fix this, add `#include <filesystem>` at the beginning of your source file.

Here's the corrected code:

```cpp

#include <filesystem>
#include <iostream>

void renameFiles() {
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");
  std::filesystem::rename("/input.txt", "/output.txt");
  std::filesystem::rename("/docs", "/mydocs");
}

int main() {
  renameFiles();
  return 0;
}
```
