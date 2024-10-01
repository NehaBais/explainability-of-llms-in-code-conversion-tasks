#include <fcntl.h>
#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::create_directory("docs"); // creates a directory called docs
  std::cout << "Directory created successfully!" << std::endl;
  return 0;
}