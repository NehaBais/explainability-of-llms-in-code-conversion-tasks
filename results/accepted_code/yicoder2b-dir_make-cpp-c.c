#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "usage: mkdir <path>\n";
    return -1;
  }

  fs::path pathToCreate(argv[1]);

  // If the directory already exists, return successfully.
  if (exists(pathToCreate)) {
    std::cout << "Directory " << argv[1] << " already exists\n";
    return 0;
  }

  try {
    create_directories(pathToCreate);
  } catch (const fs::filesystem_error &e) {
    // If the directory could not be created, print the error message.
    std::cout << "couldn't create directory: " << argv[1] << std::endl;
    return -1;
  }

  return 0;
}