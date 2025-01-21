#include <filesystem> // Added for std::filesystem
#include <iostream>

// Function to create a directory recursively, if it does not exist.
void createDirectory(const std::string &path,
                     const std::filesystem::perms &permissions) {
  try {
    std::filesystem::create_directories(path, permissions);
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << "\n";
    return;
  }
}

int main() {
  std::string path = "./path/to/dir";
  createDirectory(path, std::filesystem::perms(0770));
  return 0;
}