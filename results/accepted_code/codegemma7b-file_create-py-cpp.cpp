#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void create(const fs::path &directory) {
  // Create an empty file called "output.txt"
  std::ofstream outFile(directory / "output.txt");
  outFile.close();

  // Create an empty directory called "docs"
  fs::create_directory(directory / "docs");
}

int main() {
  // Current directory
  create(".");

  // Root directory
  create("/");

  return 0;
}