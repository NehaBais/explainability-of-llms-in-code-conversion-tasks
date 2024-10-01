#include <iostream>
#include <string>
#include <sys/stat.h>

void createDirectoryPath(const std::string &path) {
  if (mkdir(path.c_str(), 0777) != 0 && errno != EEXIST) {
    std::cerr << "Error creating directory: " << strerror(errno) << "\n";
  }
}

int main() {
  createDirectoryPath("/tmp/test");
  return 0;
}