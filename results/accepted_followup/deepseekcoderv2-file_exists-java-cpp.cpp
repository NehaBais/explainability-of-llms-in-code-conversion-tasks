#include <filesystem>
#include <iostream>

int main() {
  // Check for the current working directory
  std::filesystem::path path_current = std::filesystem::current_path();
  path_current /= "docs";
  path_current /= "input.txt";

  if (std::filesystem::exists(path_current)) {
    std::cout << "File exists in the current working directory: "
              << path_current << std::endl;
  } else {
    std::cout << "File does not exist in the current working directory: "
              << path_current << std::endl;
  }

  // Check for the filesystem root
  std::filesystem::path path_root = "/docs";
  path_root /= "input.txt";

  if (std::filesystem::exists(path_root)) {
    std::cout << "File exists in the filesystem root: " << path_root
              << std::endl;
  } else {
    std::cout << "File does not exist in the filesystem root: " << path_root
              << std::endl;
  }

  return 0;
}