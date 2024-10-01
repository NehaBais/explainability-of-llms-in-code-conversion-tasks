#include <filesystem>
#include <iostream>
#include <string>

namespace fs = std::filesystem;
using namespace std;
int main() {
  // Rename file in current directory
  if (fs::rename("input.txt", "output.txt") != 0) {
    cout << "Failed to rename input.txt" << endl;
  } else {
    cout << "Renamed input.txt to output.txt" << endl;
  }

  // Rename directory in current directory
  if (fs::rename("docs", "mydocs") != 0) {
    cout << "Failed to rename docs" << endl;
  } else {
    cout << "Renamed docs to mydocs" << endl;
  }

  // Rename file in filesystem root
  if (fs::rename("/input.txt", "/output.txt") != 0) {
    cout << "Failed to rename /input.txt" << endl;
  } else {
    cout << "Renamed /input.txt to /output.txt" << endl;
  }

  // Rename directory in filesystem root
  if (fs::rename("/docs", "/mydocs") != 0) {
    cout << "Failed to rename /docs" << endl;
  } else {
    cout << "Renamed /docs to /mydocs" << endl;
  }

  return 0;
}