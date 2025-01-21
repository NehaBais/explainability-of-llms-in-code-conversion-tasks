#include <cstdlib>
#include <filesystem>
#include <iostream>

int main() {
  try {
    // Rename files and directories "here" (current working directory)
    std::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");

    // Rename files and directories in the filesystem root
    std::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}