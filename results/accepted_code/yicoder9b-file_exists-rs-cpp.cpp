#include <filesystem>
#include <iostream>

int main() {
  for (const std::string &file : {"input.txt", "docs", "/input.txt", "/docs"}) {
    if (std::filesystem::exists(file)) {
      if (std::filesystem::is_directory(file)) {
        std::cout << file << " is a directory\n";
      } else {
        std::cout << file << " is a file\n";
      }
    } else {
      std::cout << file << " does not exist\n";
    }
  }
  return 0;
}