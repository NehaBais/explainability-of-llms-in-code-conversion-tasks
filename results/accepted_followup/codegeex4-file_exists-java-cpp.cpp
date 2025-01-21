#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path cwd =
      std::filesystem::current_path(); // Get current working directory

  // Check for file and directory in the current working directory
  if (std::filesystem::exists(cwd / "docs/input.txt")) {
    std::cout << "File and directory found in the current working directory"
              << std::endl;
  } else {
    std::cout << "File or directory not found in the current working directory"
              << std::endl;
  }

  // Check for file and directory in the filesystem root
  if (std::filesystem::exists("/docs/input.txt")) {
    std::cout << "File and directory found in the filesystem root" << std::endl;
  } else {
    std::cout << "File or directory not found in the filesystem root"
              << std::endl;
  }

  return 0;
}