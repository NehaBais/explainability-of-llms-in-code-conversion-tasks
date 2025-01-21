#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void createFile(const std::string &path) { std::ofstream file(path); }

void createDirectory(const std::string &path) {
  if (!fs::exists(path)) {
    fs::create_directory(path);
  }
}

int main() {
  try {
    // Create "output.txt" in the current working directory
    createFile("output.txt");

    // Create "output.txt" in the filesystem root
    std::string rootPath = fs::path("/").make_preferred().string();
    createFile(rootPath + "output.txt");

    // Create "docs" directory in the current working directory
    createDirectory("docs");

    // Create "docs" directory in the filesystem root
    createDirectory(rootPath + "docs");
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}