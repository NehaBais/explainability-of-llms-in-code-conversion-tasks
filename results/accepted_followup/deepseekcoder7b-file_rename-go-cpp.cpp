#include <cstdlib>
#include <iostream>

int main() {
  if (std::rename("input.txt", "output.txt") != 0) {
    std::cerr << "Error renaming 'input.txt' to 'output.txt'\n";
  }

  if (std::rename("docs", "mydocs") != 0) {
    std::cerr << "Error renaming 'docs' to 'mydocs'\n";
  }

  return 0;