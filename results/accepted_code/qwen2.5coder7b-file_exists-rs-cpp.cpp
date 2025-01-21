#include <filesystem>
#include <iostream>

int main() {
  const std::string files[] = {"input.txt", "docs", "/input.txt", "/docs"};

  for (const auto &file : files) {
    try {
      std::filesystem::path p(file);
      if (std::filesystem::exists(p)) {
        if (std::filesystem::is_directory(p)) {
          std::cout << file << " is a directory" << std::endl;
        } else {
          std::cout << file << " is a file" << std::endl;
        }
      } else {
        std::cout << file << " does not exist" << std::endl;
      }
    } catch (const std::filesystem::filesystem_error &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }

  return 0;
}