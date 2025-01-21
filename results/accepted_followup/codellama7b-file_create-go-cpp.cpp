#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  std::ofstream outputFile;
  std::filesystem::path here = std::filesystem::current_path();
  std::filesystem::path root = std::filesystem::root_path();

  // Create a new empty file in the current working directory
  outputFile.open(here / "output.txt",
                  std::ofstream::out | std::ofstream::binary);
  if (!outputFile) {
    std::cout << "Error: unable to create output file\n";
    return 1;
  }

  // Create a new empty file in the root filesystem
  outputFile.open(root / "output.txt",
                  std::ofstream::out | std::ofstream::binary);
  if (!outputFile) {
    std::cout << "Error: unable to create output file\n";
    return 1;
  }
}