#include <filesystem>
#include <iostream>

int main(void) {
  std::filesystem::path file1("input.txt");
  std::filesystem::path file2("/input.txt");

  if (std::filesystem::exists(file1)) {
    auto size = std::filesystem::file_size(file1);
    std::cout << size << std::endl;
  } else {
    std::cerr << "File 1 does not exist" << std::endl;
  }

  if (std::filesystem::exists(file2)) {
    auto size = std::filesystem::file_size(file2);
    std::cout << size << std::endl;
  } else {
    std::cerr << "File 2 does not exist" << std::endl;
  }

  return 0;
}