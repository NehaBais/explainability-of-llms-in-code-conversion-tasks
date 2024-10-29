#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
int main() {
  // Checking in the current working directory.
  if (fs::exists("docs/input.txt") && fs::is_regular_file("docs/input.txt")) {
    std::cout << "File exists" << '\n';
  } else {
    std::cout << "The file does not exist." << '\n';
  }

  if (fs::exists("/docs") && fs::is_directory("/docs")) {
    std::cout << "/docs exists" << '\n';
  } else {
    std::cout << "The /docs directory does not exist." << '\n';
  }

  return 0;
}