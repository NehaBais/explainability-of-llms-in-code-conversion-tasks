#include
int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming file");
    return 1;
  }
  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming directory");
    return 1;
  }
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Error renaming file in root directory");
    return 1;
  }
  if (rename("/docs", "/mydocs") != 0) {
    perror("Error renaming directory in root directory");
    return 1;
  }
  return 0;
}