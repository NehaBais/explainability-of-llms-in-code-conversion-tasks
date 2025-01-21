#include <filesystem>
#include <iostream>

bool checkFileExistence() {
  return std::filesystem::exists(std::filesystem::path{"docs/input.txt"});
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