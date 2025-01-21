#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Check for input.txt in the current working directory and the filesystem
  // root
  checkFile("input.txt");

  // Check for /input.txt in the filesystem root
  checkFile("/input.txt");

  // Check for docs directory in the current working directory and the
  // filesystem root
  checkDirectory("docs");

  // Check for /docs directory in the filesystem root
  checkDirectory("/docs");

  return 0;
}

void checkFile(const std::string &path) {
  if (fs::exists(path)) {
    if (fs::is_regular_file(path)) {
      std::cout << "File: " << path << " exists and is a regular file.\n";
    } else {
      std::cout << "File: " << path << " exists but is not a regular file.\n";
    }
  } else {
    std::cout << "File: " << path << " does not exist.\n";
  }
}

void checkDirectory(const std::string &path) {
  if (fs::exists(path)) {
    if (fs::is_directory(path)) {
      std::cout << "Directory: " << path << " exists and is a directory.\n";
    } else {
      std::cout << "Directory: " << path << " exists but is not a directory.\n";
    }
  } else {
    std::cout << "Directory: " << path << " does not exist.\n";
  }
}