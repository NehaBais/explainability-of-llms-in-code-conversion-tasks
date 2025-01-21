#include <filesystem>
#include <iostream>

bool checkFile(const std::string &path) {
  return std::filesystem::exists(path);
}

bool checkDirectory(const std::string &path) {
  return std::filesystem::is_directory(path);
}

int main() {
  // Check in the current working directory
  std::cout << "Checking in the current working directory:" << std::endl;
  std::cout << "input.txt exists: " << (checkFile("input.txt") ? "Yes" : "No")
            << std::endl;
  std::cout << "docs is a directory: "
            << (checkDirectory("docs") ? "Yes" : "No") << std::endl;

  // Check in the filesystem root
  std::cout << "\nChecking in the filesystem root:" << std::endl;
  std::cout << "/input.txt exists: " << (checkFile("/input.txt") ? "Yes" : "No")
            << std::endl;
  std::cout << "/docs is a directory: "
            << (checkDirectory("/docs") ? "Yes" : "No") << std::endl;

  return 0;
}