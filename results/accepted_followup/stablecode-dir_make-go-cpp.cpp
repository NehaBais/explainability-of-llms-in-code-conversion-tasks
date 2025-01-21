#include <filesystem>
#include <iostream>

int main() {
  std::string path = "/tmp/some/path/to/dir";

  try {
    create_directories(path);
    std::cout << "Directories created successfully.\n";
  } catch (const filesystem_error &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }

  return 0;
}