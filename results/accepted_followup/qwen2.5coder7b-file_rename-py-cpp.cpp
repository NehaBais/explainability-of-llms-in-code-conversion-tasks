#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path current_path = std::filesystem::current_path();

  try {
    if (std::filesystem::exists(current_path / "file.txt")) {
      std::cout << "File exists: file.txt" << std::endl;
    } else {
      std::cout << "File does not exist: file.txt" << std::endl;
    }
  } catch (const std::exception &e) {
    std::cerr << "Error accessing file system: " << e.what() << std::endl;
  }

  return 0;
}