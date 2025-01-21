#include <filesystem>
#include <iostream>

int main() {
  // Convert string to path and check if it exists
  for (const auto &file : {"input.txt", "docs"}) {
    std::filesystem::path file_path = file;
    if (std::filesystem::exists(file_path)) {
      if (std::filesystem::is_directory(file_path)) {
        std::cout << "Directory: " << file_path.string() << std::endl;
      } else {
        std::cout << "File: " << file_path.string() << std::endl;
      }
    } else {
      std::cout << "File does not exist: " << file_path.string() << std::endl;
    }
  }

  // Convert string to path and check if it is a directory
  for (const auto &directory : {"/input.txt", "/docs"}) {
    std::filesystem::path dir_path = directory;
    if (std::filesystem::is_directory(dir_path)) {
      std::cout << "Directory: " << dir_path.string() << std::endl;
    } else {
      std::cout << "File does not exist: " << dir_path.string() << std::endl;
    }
  }

  return 0;
}