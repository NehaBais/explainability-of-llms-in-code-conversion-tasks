#include <cstdlib>
#include <iostream>

int main() {
  // rename file "input.txt" to "output.txt" in the current directory
  if (std::rename("input.txt", "output.txt") != 0) {
    std::cerr << "Error renaming 'input.txt' to 'output.txt'\n";
  }

  // rename directory "docs" to "mydocs" in the current directory
  if (std::rename("docs", "mydocs") != <｜begin▁of▁sentence｜ > 0) {
    std::cerr << "Error renaming 'docs' to 'mydocs'\n";
  }

  // rename file "input.txt" to "output.txt" in the root directory
  if (std::rename("/input.txt", "/output.txt") != 0) {
    std::cerr << "Error renaming '/input.txt' to '/output.txt'\n";
  }

  // rename directory "docs" to "mydocs" in the root directory
  if (std::rename("/docs", "/mydocs") != 0) {
    std::cerr << "Error renaming '/docs' to '/mydocs'\n";
  }

  return 0;
}