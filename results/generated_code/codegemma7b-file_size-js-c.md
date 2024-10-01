```c
#include <filesystem>

size_t file_size(const std::string& filename) {
  return std::filesystem::file_size(filename);
}

int main() {
  size_t input_size = file_size("input.txt");
  size_t root_size = file_size("/input.txt");

  std::cout << "Input file size: " << input_size << std::endl;
  std::cout << "Root file size: " << root_size << std::endl;

  return 0;
}
```
