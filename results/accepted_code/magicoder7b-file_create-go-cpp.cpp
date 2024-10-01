#include <cstdlib> // for system function
#include <fstream>
#include <iostream>

void createFile(const std::string &fn) {
  std::ofstream f(fn);
  if (!f.is_open()) {
    std::cerr << "Failed to open file: " << fn << '\n';
    return;
  }
  std::cout << "File '" << fn << "' created!" << std::endl;
}

void createDir(const std::string &dn) {
  int r = std::system("mkdir -p " + dn);
  if (r != 0) {
    std::cerr << "Failed to create directory: " << dn << '\n';
    return;
  }
  std::cout << "Directory '" << dn << "' created!" << std::endl;
}

int main() {
  createFile("input.txt");
  createFile(
      "/input.txt"); // Note: This file will be created in the root directory.
                     //       You may not have write access to this location.
  createDir("docs");
  createDir("/docs");
  return 0;
}