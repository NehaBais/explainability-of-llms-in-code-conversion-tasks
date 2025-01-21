#include <cstring> // For rename function
#include <iostream>

int main() {
  try {
    // Rename in current working directory
    if (rename("input.txt", "output.txt") != 0) {
      throw std::runtime_error("Failed to rename input.txt to output.txt");
    }
    if (rename("docs", "mydocs") != 0) {
      throw std::runtime_error("Failed to rename docs to mydocs");
    }

    // Rename in filesystem root
    if (rename("/input.txt", "/output.txt") != 0) {
      throw std::runtime_error("Failed to rename /input.txt to /output.txt");
    }
    if (rename("/docs", "/mydocs") != 0) {
      throw std::runtime_error("Failed to rename /docs to /mydocs");
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}