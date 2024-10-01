#include <filesystem> // For filesystem operations (C++17)
#include <iostream>   // For cout

int main() {
  std::cout << "input.txt is a regular file? "
            << (std::filesystem::is_regular_file("input.txt") ? "yes" : "no");

  std::cout << "\ndocs is a directory? "
            << (std::filesystem::is_directory("docs") ? "yes" : "no");

  return 0;
}