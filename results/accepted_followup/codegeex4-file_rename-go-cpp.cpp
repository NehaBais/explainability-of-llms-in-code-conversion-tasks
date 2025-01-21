#include <iostream>
#include <unistd.h>

int main() {
  std::cout << "Renaming in current directory:\n";
  if (rename("input.txt", "output.txt") == -1) {
    perror("rename");
  }
  if (rename("docs", "mydocs") == -1) {
    perror("rename");
  }

  std::cout << "\nRenaming in root directory:\n";
  // Note: The following requires sudo or root privileges
  if (chdir("/") == -1) {
    perror("chdir");
    return 1;
  }
  if (rename("input.txt", "output.txt") == -1) {
    perror("rename");
  }
  if (rename("docs", "mydocs") == -1) {
    perror("rename");
  }

  return 0;
}