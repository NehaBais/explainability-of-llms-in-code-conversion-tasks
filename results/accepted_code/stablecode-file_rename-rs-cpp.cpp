#include <filesystem>
#include <iostream>
#include <string>

int main() {
  std::string err = "File move error";

  try {
    // Renaming files/directories in the current working directory
        std::filesystem::rename("input.txt", "output.txt"));
        std::filesystem::rename("docs", "mydocs");

        // Renaming files/directories in the root of filesystem
        std::filesystem::rename("/input.txt", "/output.txt"));
        std::filesystem::rename("/docs", "/mydocs");
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << '\n';
  }

  return 0;
}