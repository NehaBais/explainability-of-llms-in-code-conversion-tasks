#include <filesystem>
#include <iostream>

void mkdirp(const std::string &path) {
  try {
    // Create the directory, creating parents as needed
    std::filesystem::create_directories(path);
    std::cout << "Directory created successfully: " << path << std::endl;
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  // Example usage
  mkdirp("./path/to/dir");
  return 0;
}