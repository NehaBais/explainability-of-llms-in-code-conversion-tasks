#include <filesystem>
#include <iostream>

int main() {
  std::cout << "Size of 'input.txt': "
            << std::filesystem::file_size("./input.txt") << "\n";
  std::cout << "Size of '/input.txt': "
            << std::filesystem::file_size("/input.txt") << "\n";

  return 0;
}