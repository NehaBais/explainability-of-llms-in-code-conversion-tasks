Error: "no member named 'filesystem' in namespace 'std'"
Fix: Use the correct library name, `std::experimental::filesystem`, instead of `std::filesystem`.
Corrected code:
```cpp
#include <experimental/filesystem>
#include <iostream>

int main() {
  std::string path = "/tmp/some/path/to/dir";
  // Create a directory and any missing parents.
  std::experimental::filesystem::create_directories(path);

  return 0;
}
```
