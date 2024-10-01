#include <cstdlib>
#include <iostream>

int main() {
  const char *err = "File move error";
  if (rename("input.txt", "output.txt") == -1) {
    std::cerr << err << std::endl;
    return EXIT_FAILURE;
  }
  if (rename("docs", "mydocs") == -1) {
    std::cerr << err << std::endl;
    return EXIT_FAILURE;
  }
  if (rename("/input.txt", "/output.txt") == -1) {
    std::cerr << err << std::endl;
    return EXIT_FAILURE;
  }
  if (rename("/docs", "/mydocs") == -1) {
    std::cerr << err << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}