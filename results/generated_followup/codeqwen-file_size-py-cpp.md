Error: No member named 'filesystem' in namespace 'std'.
Fix: Include `<experimental/filesystem>` header file.
Code:

```cpp
#include <iostream>
#include <experimental/filesystem>

int main() {
  using std::experimental::filesystem;

  std::cout << "Size of 'input.txt': "
            << filesystem::file_size("./input.txt") << "\n";
  std::cout << "Size of '/input.txt': "
            << filesystem::file_size("/input.txt") << "\n";

  return 0;
}
```
