#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

void printStat(const std::string &p) {
  if (!fs::exists(p)) {
    std::cout << "Error: Path does not exist\n";
    return;
  }

  if (fs::is_directory(p)) {
    std::cout << p << " is a directory\n";
  } else if (fs::is_regular_file(p)) {
    std::cout << p << " Is a file\n";
  } else {
    std::cout << p << " Is something other than a regular file or directory.\n";
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}