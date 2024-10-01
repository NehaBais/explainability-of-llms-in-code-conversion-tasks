#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  // Create a new empty file in the current working directory
  std::ofstream outfile("output.txt");
  if (!outfile) {
    std::cerr << "Error: failed to create output.txt" << std::endl;
    return 1;
  }

  // Create a new empty file in the filesystem root
  std::ofstream outfile2("/output.txt");
  if (!outfile2) {
    std::cerr << "Error: failed to create /output.txt" << std::endl;
    return 1;
  }

  // Create a new empty directory in the current working directory
  std::filesystem::create_directory("docs");
  if (!std::filesystem::exists("docs")) {
    std::cerr << "Error: failed to create docs directory" << std::endl;
    return 1;
  }

  // Create a new empty directory in the filesystem root
  std::filesystem::create_directory("/docs");
  if (!std::filesystem::exists("/docs")) {
    std::cerr << "Error: failed to create /docs directory" << std::endl;
    return 1;
  }

  return 0;
}