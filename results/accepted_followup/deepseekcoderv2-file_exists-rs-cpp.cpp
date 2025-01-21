#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  const char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};

  for (const auto &file : files) {
    try {
      if (fs::exists(file)) {
        if (fs::is_directory(file)) {
          std::cout << file << " is a directory" << std::endl;
        } else {
          std::cout << file << " is a file" << std::endl;
        }
      } else {
        std::cout << file << " does not exist" << std::endl;
      }
    } catch (const fs::filesystem_error &e) {
      std::cerr << "Filesystem error: " << e.what() << std::endl;
    }
  }
}