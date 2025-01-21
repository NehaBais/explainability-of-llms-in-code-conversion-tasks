#include <filesystem>
#include <iostream>

int main() {
  std::string path = "C:/parent/test";
  try {
    // Create directory and any missing parents
    if (std::filesystem::create_directory(path)) {
      std::cout << "Path successfully created" << std::endl;
    } else {
      // Handle error
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}