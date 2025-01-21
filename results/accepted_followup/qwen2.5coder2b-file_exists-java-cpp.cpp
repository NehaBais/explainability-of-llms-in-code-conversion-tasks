#include <fstream>
#include <iostream>

bool checkFileExistence() {
  std::ifstream inputFile{"docs/input.txt"};
  return inputFile.is_open();
}

int main() {
  // For current working directory
  if (checkFileExistence()) {
    std::cout << "The file exists in the current working directory."
              << std::endl;
  } else {
    std::cout << "The file does not exist in the current working directory."
              << std::endl;
  }

  // For root directory
  if (checkFileExistence()) {
    std::cout << "The file exists in the root directory." << std::endl;
  } else {
    std::cout << "The file does not exist in the root directory." << std::endl;
  }

  return 0;
}