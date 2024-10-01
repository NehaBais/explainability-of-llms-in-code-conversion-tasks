#include <filesystem> // for path and exists
#include <fstream>    // for ifstream
#include <iostream>

int main() {
  std::cout << "Checking file in current directory... ";
  std::ifstream file("input.txt");

  if (file) {
    std::cout << "Found.\n";
  } else {
    std::cout << "Not found.\n";
  }
  file.close(); // close the file

  std::filesystem::path p("/docs/input.txt");

  if (std::filesystem::exists(p)) {
    std::cout << "Checking file in root directory... Found.\n";
  } else {
    std::cout << "Checking file in root directory... Not found.\n";
  }

  return 0;
}