#include <fstream>
#include <iostream>

void printFileSize(std::string f) {
  if (std::ifstream file(f, std::ios_base::ate | std::ios_base::binary)) {
    std::cout << "File size is: " << file.tellg() << "\n";
    file.close();
  } else {
    std::cerr << "Unable to open file\n";
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}