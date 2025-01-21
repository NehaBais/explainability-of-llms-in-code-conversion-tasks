#include <filesystem>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

void createDirectory(const std::string &path) {
  try {
    fs::create_directories(path);
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <path>" << std::endl;
    return 1;
  }

  createDirectory(argv[1]);

  return 0;
}