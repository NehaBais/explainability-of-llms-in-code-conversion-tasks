#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sys/stat.h>

void exit_err(const std::string &msg, int code) {
  std::cerr << "Error: " << msg << std::endl;
  exit(code);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    exit_err("No file name supplied", 1);
  }

  struct stat buf;
  std::string filename = argv[1];

  // check if the file exists and get its size
  if (stat(filename.c_str(), &buf) == -1) {
    exit_err("Cannot access " + filename, 2);
  }

  std::cout << "Size of " << filename << " is " << buf.st_size << " bytes"
            << std::endl;
}