#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  try {
    fs::create_directories("./path/to/dir");
  } catch (const std::exception &e) {
    std::cerr << "An error occurred: " << e.what() << '\n';
    return 1;
  }

  return 0;
}