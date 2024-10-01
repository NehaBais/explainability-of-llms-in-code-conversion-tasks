#include <cstdlib>
int main() {
  // Rename file in current working directory
  if (rename("input.txt", "output.txt") == 0) {
    std::cout << "File renamed successfully!\n";
  } else {
    std::cout << "Failed to rename the file!\n";
  }

  // Rename directory in current working directory
  if (rename("docs", "mydocs") == 0) {
    std::cout << "Directory renamed successfully!\n";
  } else {
    std::cout << "Failed to rename the directory!\n";
  }

  // Rename file at root directory
  if (rename("/input.txt", "/output.txt") == 0) {
    std::cout << "File renamed successfully in root directory!\n";
  } else {
    std::cout << "Failed to rename the file in root directory!\n";
  }

  // Rename directory at root directory
  if (rename("/docs", "/mydocs") == 0) {
    std::cout << "Directory renamed successfully in root directory!\n";
  } else {
    std::cout << "Failed to rename the directory in root directory!\n";
  }
  return 0;
}