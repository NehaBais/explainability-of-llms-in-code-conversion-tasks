#include
#include
int main() {
  if (rename("input.txt", "output.txt") != 0) {
    std::cerr << "Error renaming file in current working directory"
              << std::endl;
    return 1;
  }
  if (rename("docs", "mydocs") != 0) {
    std::cerr << "Error renaming directory in current working directory"
              << std::endl;
    return 1;
  }
  if (rename("/input.txt", "/output.txt") != 0) {
    std::cerr << "Error renaming file in root filesystem" << std::endl;
    return 1;
  }
  if (rename("/docs", "/mydocs") != 0) {
    std::cerr << "Error renaming directory in root filesystem" << std::endl;
    return 1;
  }
  return 0;
}