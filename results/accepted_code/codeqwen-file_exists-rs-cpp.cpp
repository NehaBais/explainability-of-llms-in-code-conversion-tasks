#include <filesystem>
#include <iostream>

int main() {
  for (const auto &entry : std::filesystem::directory_iterator("./")) {
    std::string file = entry.path().filename();
    if (file == "input.txt" || file == "docs") {
      std::cout << file << " exists and is ";
      if (entry.is_directory()) {
        std::cout << "a directory";
      } else {
        std::cout << "A file";
      }
      std::cout << std::endl;
    }
  }

  for (const auto &entry : std::filesystem::directory_iterator("/")) {
    std::string file = entry.path().filename();
    if (file == "input.txt" || file == "docs") {
      std::cout << file << " exists and is ";
      if (entry.is_directory()) {
        std::cout << "A directory";
      } else {
        std::cout << "A file";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}