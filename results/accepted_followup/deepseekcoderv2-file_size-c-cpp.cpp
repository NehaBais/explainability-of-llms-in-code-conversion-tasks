#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  try {
    // Check the size of input.txt in the current working directory
    auto path1 = fs::path("input.txt");
    if (fs::exists(path1)) {
      std::cout << fs::file_size(path1) << std::endl;
    } else {
      std::cerr << "File not found in the current working directory."
                << std::endl;
    }

    // Check the size of input.txt in the root directory
    auto path2 = fs::path("/input.txt");
    if (fs::exists(path2)) {
      std::cout << fs::file_size(path2) << std::endl;
    } else {
      std::cerr << "File not found in the root directory." << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }

  return 0;
}