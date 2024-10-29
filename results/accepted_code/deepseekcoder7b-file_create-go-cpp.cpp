#include <direct.h> // For _mkdir in windows
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
  if (_mkdir(dn.c_str()) == 0) {
    std::cout << "directory " << dn << " created!\n";
  } else {
    std::cerr << "Error creating directory: " << dn << "\n";
  }
}

int main() {
  createFile("output.txt");
  createDir("docs");

  // On Unix-based systems you might need to prefix the paths with "/" if it's
  // in root directory, e.g: createFile("/input.txt") createDir("/docs")
}