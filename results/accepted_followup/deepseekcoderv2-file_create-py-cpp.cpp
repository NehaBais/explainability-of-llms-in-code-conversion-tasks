#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void create(const std::string &directory) {
  // Create an empty file "output.txt" in the specified directory
  std::ofstream outFile(directory + "/output.txt");

  // Create an empty directory "docs" in the specified directory
  fs::create_directory(fs::path(directory) / "docs");
}

int main() {
  create("."); // current directory
  create("/"); // root directory
  return 0;
}