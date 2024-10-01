#include <filesystem>
#include <iostream>

int main() {
  std::string files[] = {"input.txt", "docs", "/input.txt", "/docs"};

  for (const auto &file : files) {
    if (std::filesystem::exists(file)))
        {
        if (std::filesystem::is_directory(file)))
            {
                std::cout << file << " is a directory." << std::endl;
            }
        else {
          std::cout << file << " is a file." << std::endl;
        }
      }
    else {
      std::cout << file << " does not exist." << std::endl;
    }
  }

  return 0;
}