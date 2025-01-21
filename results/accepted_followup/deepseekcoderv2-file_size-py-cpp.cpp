#include <filesystem>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

int main() {
  // Check size in the current working directory
  try {
    if (fs::exists("input.txt")) {
      auto size = fs::file_size("input.txt");
      std::cout << "Size of input.txt in current directory: " << size
                << " bytes" << std::endl;
    } else {
      std::cerr << "File 'input.txt' does not exist in the current directory."
                << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr
        << "Error checking size of file 'input.txt' in current directory: "
        << e.what() << std::endl;
  }

  // Check size in the root directory
  try {
    if (fs::exists("/input.txt")) {
      auto size = fs::file_size("/input.txt");
      std::cout << "Size of /input.txt in root directory: " << size << " bytes"
                << std::endl;
    } else {
      std::cerr << "/input.txt does not exist in the root directory."
                << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error checking size of file '/input.txt' in root directory: "
              << e.what() << std::endl;
  }

  return 0;
}