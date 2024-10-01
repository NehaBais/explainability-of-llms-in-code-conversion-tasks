#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sys/stat.h>

void createFile(const char *fn) {
  std::ofstream file;
  file.open(fn);
  if (!file) {
    std::cout << "Error creating file: " << fn << std::endl;
    return;
  }
  std::cout << "File " << fn << " created!" << std::endl;
  file.close();
}

void createDir(const char *dn) {
  if (mkdir(dn, 0777) < 0) {
    std::cerr << "Error creating directory: " << dn << std::endl;
    return;
  }
  std::cout << "Directory " << dn << " created!" << std::endl;
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");
  return 0;
}