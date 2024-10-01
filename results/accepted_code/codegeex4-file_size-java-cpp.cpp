#include <fstream>
#include <iomanip>
#include <iostream>
#include <locale>

int main() {
  // set locale to print numbers with comma as thousand separator
  std::locale loc("en_US.UTF-8");
  std::cout.imbue(loc);

  std::ifstream fileA("file.txt", std::ios::binary | std::ios::ate);
  if (fileA.is_open()) {
    std::streampos size = fileA.tellg();
    std::cout << std::showbase << std::setw(10) << std::setfill('0') << size
              << " B\n";
    fileA.close();
  } else {
    std::cerr << "Unable to open file.\n";
  }

  // Open file in the root directory
  std::ifstream fileB("/file.txt", std::ios::binary | std::ios::ate);
  if (fileB.is_open()) {
    std::streampos size = fileB.tellg();
    std::cout << std::showbase << std::setw(10) << std::setfill('0') << size
              << " B\n";
    fileB.close();
  } else {
    std::cerr << "Unable to open file.\n";
  }

  return 0;
}