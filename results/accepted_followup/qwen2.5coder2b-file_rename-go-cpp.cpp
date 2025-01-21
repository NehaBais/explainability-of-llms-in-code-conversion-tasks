#include <filesystem>
#include <iostream>

void renameFiles() {
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");
  std::filesystem::rename("/input.txt", "/output.txt");
  std::filesystem::rename("/docs", "/mydocs");
}

int main() {
  renameFiles();
  return 0;
}