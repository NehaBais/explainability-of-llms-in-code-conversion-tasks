#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void checkFileOrDir(std::string path) {
  if (fs::exists(path)) {
    if (fs::is_directory(path))
      std::cout << path << " is a directory" << std::endl;
    else
      std::cout << path << " is a file" << std::endl;
  } else {
    std::cout << path << " does not exist" << std::endl;
  }
}

int main() {
  // Check in current working directory
  checkFileOrDir("input.txt");
  checkFileOrDir("docs");

  // Check for files and directories in root directory
  checkFileOrDir("/input.txt");
  checkFileOrDir("/docs");

  return 0;
}