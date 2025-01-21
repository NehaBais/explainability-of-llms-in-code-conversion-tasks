#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path inputPath("input.txt");
  std::filesystem::path docsPath("docs");

  if (std::filesystem::exists(inputPath)) {
    std::cout << "The file 'input.txt' exists." << std::endl;
  } else {
    std::cout << "The file 'input.txt' does not exist." << std::endl;
  }

  if (std::filesystem::exists(docsPath)) {
    std::cout << "The directory 'docs' exists." << std::endl;
  } else {
    std::cout << "The directory 'docs' does not exist." << std::endl;
  }

  return 0;
}