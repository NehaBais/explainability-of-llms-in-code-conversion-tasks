#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  if (fs::exists("input.txt"))
    std::cout << "File 'input.txt' exists in the current working directory."
              << std::endl;
  else
    std::cout
        << "File 'input.txt' does not exist in the current working directory."
        << std::endl;

  if (fs::is_directory("docs"))
    std::cout << "Directory 'docs' exists in the current working directory."
              << std::endl;
  else
    std::cout
        << "Directory 'docs' does not exist in the current working directory."
        << std::endl;

  if (fs::exists("c:/input.txt"))
    std::cout << "File 'input.txt' exists at the filesystem root." << std::endl;
  else
    std::cout << "File 'input.txt' does not exist at the filesystem root."
              << std::endl;

  if (fs::is_directory("c:/docs"))
    std::cout << "Directory 'docs' exists at the filesystem root." << std::endl;
  else
    std::cout << "Directory 'docs' does not exist at the filesystem root."
              << std::endl;

  return 0;
}