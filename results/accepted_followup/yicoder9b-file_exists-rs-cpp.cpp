#include <cstdlib>
#include <iostream>
#include <sys/stat.h>

int main() {
  for (const char *file : {"input.txt", "docs", "/input.txt", "/docs"}) {
    struct stat buffer;
    if (stat(file, &buffer) == 0) {
      if ((buffer.st_mode & S_IFMT) == S_IFDIR) {
        std::cout << file << " is a directory\n";
      } else {
        std::cout << file << " is a file\n";
      }
    } else {
      std::cout << file << " does not exist\n";
    }
  }
  return 0;
}