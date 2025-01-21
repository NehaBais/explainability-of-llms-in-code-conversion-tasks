#include <cstdlib>
#include <filesystem>
#include <iostream>

int main() {
  try {
    // rename a file
    std::rename("input.txt", "output.txt");

    // rename a directory
    std::filesystem::rename("docs", "mydocs");
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }
}