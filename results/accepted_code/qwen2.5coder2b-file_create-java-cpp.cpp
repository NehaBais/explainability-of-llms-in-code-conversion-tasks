#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  // Create new empty file called "output.txt"
  std::ofstream outFile("output.txt");
  if (!outFile.is_open()) {
    std::cerr << "Failed to create output.txt" << std::endl;
    return 1;
  }
  outFile.close();

  // Create a new directory called "docs"
  std::filesystem::create_directory("docs");

  // Repeat the same steps for the filesystem root
  if (!std::filesystem::create_directory("/output.txt")) {
    std::cerr << "Failed to create /output.txt" << std::endl;
    return 1;
  }
  if (!std::filesystem::create_directory("/docs")) {
    std::cerr << "Failed to create /docs" << std::endl;
    return 1;
  }

  return 0;
}