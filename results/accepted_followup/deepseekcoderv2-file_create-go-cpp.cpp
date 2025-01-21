#include <cerrno>
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h> // For chdir to change directory and mkdir to create directories

void createFile(const std::string &fn) {
  std::ofstream file(fn);
  if (!file) {
    std::cerr << "Error creating file: " << strerror(errno) << std::endl;
    return;
  }
  std::cout << "File " << fn << " created!" << std::endl;
}

void createDir(const std::string &dn) {
  int result = mkdir(dn.c_str(), 0666);
  if (result != 0) {
    std::cerr << "Error creating directory: " << strerror(errno) << std::endl;
    return;
  }
  std::cout << "Directory " << dn << " created!" << std::endl;
}

int main() {
  // Change to the current working directory
  if (chdir(".") == -1) {
    std::cerr << "Error changing to current directory: " << strerror(errno)
              << std::endl;
    return 1;
  }

  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");

  return 0;
}