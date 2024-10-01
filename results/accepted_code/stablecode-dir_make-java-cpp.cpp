#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void createDirectories(const std::string &path) {
  try {
    fs::path dirPath(path);

    if (fs::create_directories(dirPath)))
            std::cout << "Directory created successfully\n";
    else
      std::cerr << "Failed to create directory\n";
  } catch (const std::exception &e) {
    std::cerr << "Exception caught: " << e.what() << '\n';
  }
}

int main() {
  createDirectories("C:/parent/test");
  return 0;
}