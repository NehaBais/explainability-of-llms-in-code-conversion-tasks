#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  try {
    std::ofstream("output.txt"); // Creates or truncates the file to 0 bytes in
                                 // the current working directory
    std::ofstream(
        std::string(1, std::filesystem::path::preferred_separator) +
        "output.txt"); // Creates or truncates the file to 0 bytes at root
    std::filesystem::create_directory(
        "docs"); // creates an empty directory called 'docs' in the current
                 // working directory
    std::filesystem::create_directory(
        std::string(1, std::filesystem::path::preferred_separator) +
        "docs"); // creates an empty directory at root
  } catch (const std::exception &e) {
    std::cerr << e.what()
              << '\n'; // prints the error message if any exception is thrown
                       // while creating files or directories.
  }
  return 0;
}