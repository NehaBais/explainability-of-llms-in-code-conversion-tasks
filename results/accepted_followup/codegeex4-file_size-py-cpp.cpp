#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path filePath1("input.txt");
  std::filesystem::path filePath2("/input.txt");

  if (std::filesystem::exists(filePath1)) {
    auto size = std::filesystem::file_size(filePath1);
    std::cout << "Size of input.txt in current directory: " << size
              << " bytes\n";
  } else {
    std::cerr << "File input.txt does not exist in the current directory.\n";
  }

  if (std::filesystem::exists(filePath2)) {
    auto size = std::filesystem::file_size(filePath2);
    std::cout << "Size of /input.txt in the file system root: " << size
              << " bytes\n";
  } else {
    std::cerr << "File /input.txt does not exist in the root directory.\n";
  }

  return 0;
}