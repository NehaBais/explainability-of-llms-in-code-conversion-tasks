#include <cerr>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

void create_directory(std::string path) {
  if (std::filesystem::exists(path)) {
    std::cout << "Directory already exists." << std::endl;
  } else {
    try {
      std::filesystem::create_directories(path);
      std::cout << "Directory created successfully." << std::endl;
    } catch (const std::exception &e) {
      std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
  }
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "usage: ./path/to/dir\n";
    return 1;
  }

  std::string path = argv[1];
  create_directory(path);
  return 0;
}