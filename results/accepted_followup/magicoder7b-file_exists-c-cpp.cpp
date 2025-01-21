#include <filesystem>
#include <iostream>

int main() {
  std::cout << "input.txt is a regular file? "
            << (std::filesystem::exists("input.txt") &&
                std::filesystem::is_regular_file("input.txt"))
      ? "yes"
      : "no";
  std::cout << "\ndocs is a directory? "
            << (std::filesystem::exists("docs") &&
                std::filesystem::is_directory("docs"))
      ? "yes"
      : "no";
  std::cout << "\n/input.txt is a regular file? "
            << (std::filesystem::exists("/input.txt") &&
                std::filesystem::is_regular_file("/input.txt"))
      ? "yes"
      : "no";
  std::cout << "\n/docs is a directory? "
            << (std::filesystem::exists("/docs") &&
                std::filesystem::is_directory("/docs"))
      ? "yes"
      : "no";
  return 0;
}