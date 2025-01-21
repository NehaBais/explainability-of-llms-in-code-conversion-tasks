#include <filesystem>
#include <iostream>

void printFileSize(const std::string &f) {
  try {
    auto size = std::filesystem::file_size(f);
    std::cout << size << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}