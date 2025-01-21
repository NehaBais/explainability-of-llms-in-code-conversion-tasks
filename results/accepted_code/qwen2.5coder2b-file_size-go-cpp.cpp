#include <fstream>
#include <iostream>
#include <string>

void PrintFileSize(const std::string &file) {
  std::ifstream f(file);
  if (!f.is_open()) {
    std::cerr << "Cannot open file: " << file << std::endl;
    return;
  }

  std::streampos fileSize = f.tellg();
  f.close();
  std::cout << "File size is " << fileSize << " bytes" << std::endl;
}

int main() {
  PrintFileSize("input.txt");
  PrintFileSize("/input.txt");
}