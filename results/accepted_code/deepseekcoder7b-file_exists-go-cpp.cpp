#include <boost/filesystem.hpp>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
namespace fs = boost::filesystem;

void printStat(const char *path) {
  struct stat buffer;
  if (stat(path, &buffer) != 0) {
    std::cout << "Cannot access: " << path << std::endl;
  } else if (S_ISDIR(buffer.st_mode)) {
    std::cout << path << " is a directory" << std::endl;
  } else {
    std::cout << path << " is a file" << std::endl;
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}