#include <filesystem>
#include <iostream>

void printStat(const std::string &path) {
  try {
    const auto file_status = std::filesystem::status(path);
    if (std::filesystem::exists(file_status)) {
      if (std::filesystem::is_directory(file_status)) {
        std::cout << path << " is a directory" << std::endl;
      } else {
        std::cout << path << " is a file" << std::endl;
      }
    } else {
      std::cerr << "File or directory does not exist: " << path << std::endl;
    }
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}