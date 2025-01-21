#include <experimental/filesystem>
#include <iostream>

int main() {
  using std::experimental::filesystem;

  std::cout << "Size of 'input.txt': " << filesystem::file_size("./input.txt")
            << "\n";
  std::cout << "Size of '/input.txt': " << filesystem::file_size("/input.txt")
            << "\n";

  return 0;
}