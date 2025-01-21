#include <cstdio>
#include <iostream>

int main() {
  // Renaming in the current directory
  if (std::rename("input.txt", "output.txt") == 0) {
    std::cout << "Renamed 'input.txt' to 'output.txt'.\n";
  } else {
    std::cerr << "Failed to rename 'input.txt'.\n";
  }

  // Renaming in the root directory
  if (std::rename("/input.txt", "/output.txt") == 0) {
    std::cout << "Renamed '/input.txt' to '/output.txt'.\n";
  } else {
    std::cerr << "Failed to rename '/input.txt'.\n";
  }

  // Renaming in the current directory (absolute path)
  if (std::rename("docs", "mydocs") == 0) {
    std::cout << "Renamed 'docs' to 'mydocs'.\n";
  } else {
    std::cerr << "Failed to rename 'docs'.\n";
  }

  // Renaming in the root directory (absolute path)
  if (std::rename("/docs", "/mydocs") == 0) {
    std::cout << "Renamed '/docs' to '/mydocs'.\n";
  } else {
    std::cerr << "Failed to rename '/docs'.\n";
  }

  return 0;
}