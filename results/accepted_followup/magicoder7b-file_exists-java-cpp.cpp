#include <fstream> // for ifstream
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

#if __cplusplus >=                                                             \
    201703L // Check if C++ version is greater than or equal to 17
  std::filesystem::path p("/docs/input.txt");

  if (std::filesystem::exists(p)) {
    std::cout << "Checking file in root directory... Found.\n";
  } else {
    std::cout << "Checking file in root directory... Not found.\n";
  }
#else
  // Fall back to alternative method for pre-C++17 compilers
  if (std::ifstream("/docs/input.txt")) {
    std::cout << "Checking file in root directory... Found.\n";
  } else {
    std::cout << "Checking file in root directory... Not found.\n";
  }
#endif

  return 0;
}