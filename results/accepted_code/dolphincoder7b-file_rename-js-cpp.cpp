#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Move "input.txt" to "output.txt" in current directory
  if (fs::exists("input.txt")) {
    fs::rename("input.txt", "output.txt");
  }

  // Move "input.txt" to "output.txt" in filesystem root
  if (fs::exists("c:/input.txt")) {
    fs::rename("c:/input.txt", "c:/output.txt");
  }

  // Move "docs" directory to "mydocs" in current directory
  if (fs::is_directory("docs") && !fs::is_empty("docs")) {
    fs::rename("docs", "mydocs");
  }

  // Move "docs" directory to "mydocs" in filesystem root
  if (fs::is_directory("c:/docs") && !fs::is_empty("c:/docs")) {
    fs::rename("c:/docs", "c:/mydocs");
  }
}