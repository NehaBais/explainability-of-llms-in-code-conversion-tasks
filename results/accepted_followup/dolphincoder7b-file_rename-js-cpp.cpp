#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Move "input.txt" to "output.txt" in current directory
  if (fs::exists("input.txt")) {
    try {
      fs::rename("input.txt", "output.txt");
    } catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    }
  }

  // Move "input.txt" to "output.txt" in filesystem root
  if (fs::exists("c:/input.txt")) {
    try {
      fs::rename("c:/input.txt", "c:/output.txt");
    } catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    }
  }

  // Move "docs" directory to "mydocs" in current directory
  if (fs::is_directory("docs") && !fs::is_empty("docs")) {
    try {
      fs::rename("docs", "mydocs");
    } catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    }
  }

  // Move "docs" directory to "mydocs" in filesystem root
  if (fs::is_directory("c:/docs") && !fs::is_empty("c:/docs")) {
    try {
      fs::rename("c:/docs", "c:/mydocs");
    } catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    }
  }
}