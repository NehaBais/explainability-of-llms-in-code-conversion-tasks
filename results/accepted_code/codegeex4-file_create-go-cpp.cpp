#include <fstream>
#include <iostream>
#include <sys/stat.h>

void create_file(const std::string &filename) {
  std::ofstream file(filename);
  if (!file) {
    std::cerr << "Error creating file: " << filename << '\n';
    return;
  }
  std::cout << "File " << filename << " created!\n";
}

void create_dir(const std::string &dirname) {
  int status = mkdir(dirname.c_str(), 0777);
  if (status != 0) {
    std::cerr << "Error creating directory: " << dirname << '\n';
    return;
  }
  std::cout << "Directory " << dirname << " created!\n";
}

int main() {
  create_file("input.txt");
  create_file("/input.txt");
  create_dir("docs");
  create_dir("/docs");

  return 0;
}