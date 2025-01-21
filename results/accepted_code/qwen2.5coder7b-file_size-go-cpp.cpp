#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void printFileSize(const std::string &f) {
  try {
    auto stat = fs::status(f);
    std::cout << fs::file_size(stat) << '\n';
  } catch (fs::filesystem_error &e) {
    std::cerr << e.what() << '\n';
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}