#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void moveFile(const std::string &oldPath, const std::string &newPath) {
  try {
    if (fs::exists(oldPath)) {
      fs::rename(oldPath, newPath);
      std::cout << "Moved file from " << oldPath << " to " << newPath
                << std::endl;
    } else {
      std::cerr << "File does not exist: " << oldPath << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }
}

void moveFolder(const std::string &oldPath, const std::string &newPath) {
  try {
    if (fs::exists(oldPath)) {
      fs::rename(oldPath, newPath);
      std::cout << "Moved folder from " << oldPath << " to " << newPath
                << std::endl;
    } else {
      std::cerr << "Folder does not exist: " << oldPath << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }
}

int main() {
  // Move file in the current working directory
  moveFile("input.txt", "output.txt");
  moveFile("c:/input.txt", "c:/output.txt");

  // Move folder in the current working directory
  moveFolder("docs", "mydocs");
  moveFolder("c:/docs", "c:/mydocs");

  return 0;
}