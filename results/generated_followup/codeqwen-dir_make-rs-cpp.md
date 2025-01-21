Error: No member named 'filesystem' in namespace 'std'.
Fix: Include `<filesystem>` header in C++.
Corrected Code:

```cpp
#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path dir_to_create("./path/to/dir");
  if (!std::filesystem::exists(dir_to_create)) {
    if (!std::filesystem::create_directories(dir_to_create)) {
      std::cerr << "An Error Occurred!";
      return 1;
    }
  }
  return 0;
}
```
