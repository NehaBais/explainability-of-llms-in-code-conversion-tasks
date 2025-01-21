#include <filesystem>
#include <iomanip>
#include <iostream>

int main() {
  std::filesystem::path fileA("file.txt");
  std::cout << std::setw(20) << std::right << std::fixed << std::showbase
            << fileA.file_size() << " B\n";

  std::filesystem::path fileB("/file.txt");
  std::cout << std::setw(20) << std::right << std::fixed << std::showbase
            << fileB.file_size() << " B\n";

  return 0;
}