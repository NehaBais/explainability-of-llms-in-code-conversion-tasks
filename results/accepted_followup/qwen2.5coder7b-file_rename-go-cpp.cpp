#include <filesystem>
#include <iostream>

int main() {
  std::string currentPath = "./"; // Current working directory
  std::string rootPath = "/";     // Filesystem root

  try {
    std::filesystem::rename(currentPath + "input.txt",
                            currentPath + "output.txt");
    std::filesystem::rename(currentPath + "docs", currentPath + "mydocs");
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Failed to rename files in the current directory: " << e.what()
              << std::endl;
  }

  try {
    std::filesystem::rename(rootPath + "input.txt", rootPath + "output.txt");
    std::filesystem::rename(rootPath + "docs", rootPath + "mydocs");
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Failed to rename files at the filesystem root: " << e.what()
              << std::endl;
  }

  return 0;
}