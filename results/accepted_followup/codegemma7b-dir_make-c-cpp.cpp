#include <filesystem>
#include <iostream>
#include <string>

int main() {
  std::string path = "./path/to/dir";

  try {
    std::filesystem::create_directories(path);
    std::cout << "Directory created successfully." << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }

  return 0;
}