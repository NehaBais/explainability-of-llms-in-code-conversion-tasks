#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  std::string current_directory = "./";
  std::string root_directory = "/";

  // Check if file exists in the current directory
  if (std::filesystem::exists(current_directory + "input.txt")) {
    std::cout << "File input.txt exists in the current directory.\n";
  } else {
    std::cout << "File input.txt does not exist in the current directory.\n";
  }

  // Check if file exists in the root directory
  if (std::filesystem::exists(root_directory + "input.txt")) {
    std::cout << "File input.txt exists in the root directory.\n";
  } else {
    std::cout << "File input.txt does not exist in the root directory.\n";
  }

  // Check if directory exists in the current directory
  if (std::filesystem::exists(current_directory + "docs")) {
    std::cout << "Directory docs exists in the current directory.\n";
  } else {
    std::cout << "Directory docs does not exist in the current directory.\n";
  }

  // Check if directory exists in the root directory
  if (std::filesystem::exists(root_directory + "docs")) {
    std::cout << "Directory docs exists in the root directory.\n";
  } else {
    std::cout << "Directory docs does not exist in the root directory.\n";
  }

  return 0;
}