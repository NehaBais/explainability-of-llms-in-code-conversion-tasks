#include <iostream>
#include <string>
#include <sys/stat.h>

int main() {
  for (const auto &file : {"input.txt", "docs", "/input.txt", "/docs"}) {
    struct stat attr;
    if (stat(file, &attr) == 0) {
      if (S_ISDIR(attr.st_mode)) {
        std::cout << file << " is a directory\n";
      } else {
        std::cout << file << " is a file\n";
      }
    } else {
      std::cerr << file << " does not exist\n";
    }
  }
}