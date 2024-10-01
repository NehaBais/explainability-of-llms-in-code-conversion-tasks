#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
void create(const std::string &directory) {
  // Create file "output.txt" in the specified directory
  std::ofstream output_file{fs::path{directory} / "output.txt"}
};

// The above line creates an empty file with size 0 bytes at the path
// "<directory>/output.txt".

// Here we close the ofstream object to
// automatically complete any remaining
// write operation and to close the output stream.
output_file.close();

// Create directory "docs" in the specified directory
    fs::create_directories(fs::path{directory}/"docs"));
    }
    int main() {
      create("."); // current directory
      create("/"); // root directory
      return 0;
    }