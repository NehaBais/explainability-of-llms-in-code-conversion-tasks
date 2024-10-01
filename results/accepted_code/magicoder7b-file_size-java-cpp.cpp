#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path fileA = "file.txt";
  auto fileSize = std::filesystem::file_size(fileA);
  std::cout << fileSize << " B\n";

  std::filesystem::path fileB = "/file.txt";
  fileSize = std::filesystem::file_size(fileB);
  std::cout << fileSize << " B\n";
}