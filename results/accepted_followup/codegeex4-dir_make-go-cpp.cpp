#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void createDirectories(const std::string &path) {
  try {
    // Create the directory along with any necessary parent directories.
    fs::create_directories(path);

    // Check if directory was created successfully.
    if (fs::exists(path)) {
      std::cout << "Directory created successfully: " << path << std::endl;
    } else {
      std::cerr << "Failed to create directory: " << path << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    // Handle any errors during the creation process.
    std::cerr << e.what() << '\n';
  }
}

int main() {
  std::string path = "./path/to/dir";
  createDirectories(path);

  return 0;
}