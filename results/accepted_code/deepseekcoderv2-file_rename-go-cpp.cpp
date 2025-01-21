#include <filesystem> // For std::filesystem::rename
#include <iostream>   // For std::cout, std::cerr

int main() {
  try {
    // Rename file "input.txt" to "output.txt" in the current working directory
    std::filesystem::rename("input.txt", "output.txt");

    // Rename directory "docs" to "mydocs" in the current working directory
    std::filesystem::rename("docs", "mydocs");

    // Rename file "input.txt" to "output.txt" in the filesystem root
    std::filesystem::rename("/input.txt", "/output.txt");

    // Rename directory "docs" to "mydocs" in the filesystem root
    std::filesystem::rename("/docs", "/mydocs");
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << '\n';
    return 1;
  }

  return 0;
}