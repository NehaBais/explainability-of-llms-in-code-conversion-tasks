#include <filesystem> // For C++17 or later
#include <iostream>
// For older versions of C++, you might need to use boost::filesystem or another
// third-party library

bool FileExists(const std::string &path) {
  return std::filesystem::exists(path);
}

bool DirectoryExists(const std::string &path) {
  return std::filesystem::is_directory(path);
}

int main() {
  // Check for the current working directory
  std::string inputPath1 = "input.txt";
  std::string docsPath1 = "docs";

  if (FileExists(inputPath1) && DirectoryExists(docsPath1)) {
    std::cout << "Both file '" << inputPath1 << "' and directory '" << docsPath1
              << "' exist in the current working directory." << std::endl;
  } else {
    std::cout << "Either file '" << inputPath1 << "' or directory '"
              << docsPath1
              << "' does not exist in the current working directory."
              << std::endl;
  }

  // Check for the filesystem root (assuming C: drive)
  std::string inputPath2 = "c:/input.txt";
  std::string docsPath2 = "c:/docs";

  if (FileExists(inputPath2) && DirectoryExists(docsPath2)) {
    std::cout << "Both file '" << inputPath2 << "' and directory '" << docsPath2
              << "' exist in the filesystem root." << std::endl;
  } else {
    std::cout << "Either file '" << inputPath2 << "' or directory '"
              << docsPath2 << "' does not exist in the filesystem root."
              << std::endl;
  }

  return 0;
}