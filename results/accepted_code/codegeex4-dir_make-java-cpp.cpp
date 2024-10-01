#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  try {
    // Specify the path for the directory
    fs::path dirPath("C:/parent/test");

    // Check if the directory exists and create missing parent directories
    if (fs::create_directories(dirPath)) {
      std::cout << "Path successfully created" << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }

  return 0;
}