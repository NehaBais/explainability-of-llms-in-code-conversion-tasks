#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void create(const std::string &directory) {
  // Create an empty file named "output.txt" with size 0 bytes
  fs::path filePath(directory);
  filePath /= "output.txt";
  std::ofstream ofs(filePath, std::ios::out | std::ios::binary);
  if (!ofs.is_open()) {
    std::cerr << "Failed to create output.txt in directory: " << directory
              << std::endl;
    return;
  }
  ofs.close();

  // Create an empty directory named "docs"
  filePath /= "docs";
  if (!fs::create_directory(filePath)) {
    std::cerr << "Failed to create docs directory in directory: " << directory
              << std::endl;
  }
}

int main() {
  try {
    // Create files and directories in the current working directory
    create(".");

    // Create files and directories at the filesystem root (requires admin
    // privileges)
    create("/");
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }

  return 0;
}