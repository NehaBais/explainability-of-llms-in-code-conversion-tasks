#include <filesystem>
#include <iostream>

int main() {
  std::cout << "Size of 'input.txt' in the current directory: "
            << std::filesystem::file_size("input.txt") << '\n';

  std::cout << "Size of '/input.txt' in the root file system: "
            << std::filesystem::file_size("/input.txt") << '\n';

  return 0;
}