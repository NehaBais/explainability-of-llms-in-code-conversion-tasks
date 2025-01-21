#include <fstream>
#include <iostream>
#include <string>

void printFileSize(const std::string &f) {
  std::ifstream file(f);
  if (file.good()) {
    file.seekg(0, std::ios_base::end);
    std::cout << "Size of the file: " << f << ": " << file.tellg()
              << " bytes\n";
  } else {
    std::cerr << "File does not exist: " << f << "\n";
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");

  return 0;
}