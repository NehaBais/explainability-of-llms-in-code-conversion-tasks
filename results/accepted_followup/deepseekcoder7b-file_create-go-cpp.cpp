#include <fstream>
#include <iostream>

void createFile(std::string fn) {
  std::ofstream outfile(fn);
  if (!outfile) {
    std::cerr << "Error creating file: " << fn << "\n";
    return;
  }
  std::cout << "file " << fn << " created!\n";
}

void createDir(std::string dn) {
  if (mkdir(dn.c_str(), 0666) == 0) {
    std::cout << "directory " << dn << " created!\n";
  } else {
    std<｜begin▁of▁sentence｜> err << "Error creating directory: " << dn
                                   << "\n";
  }
}

int main() {
  createFile("output.txt");
  createDir("docs");
}