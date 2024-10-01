#include <fstream>
#include <iostream>

int main() {
  std::ifstream input_file("input.txt");
  std::ifstream input_root_file("c:/input.txt");

  if (input_file.good()) {
    // Check the size of the file in the current working directory
    std::cout << "File size: " << input_file.tellg() << std::endl;
  } else {
    std::cerr << "Error opening file" << std::endl;
    return 1;
  }

  if (input_root_file.good()) {
    // Check the size of the file in the root directory
    std::cout << "Root file size: " << input_root_file.tellg() << std::endl;
  } else {
    std::cerr << "Error opening root file" << std::endl;
    return 1;
  }

  return 0;
}