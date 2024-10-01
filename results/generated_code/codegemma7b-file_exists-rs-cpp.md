```cpp
#include <filesystem>

int main() {
  for (const auto& file : {"input.txt", "docs", "/input.txt", "/docs"}) {
    try {
      if (std::filesystem::is_directory(file)) {
        std::cout << file << " is a directory" << std::endl;
      } else {
        std::cout << file << " is a file" << std::endl;
      }
    } catch (const std::exception& e) {
      std::cout << file << " does not exist" << std::endl;
    }
  }
  return 0;
}
```
