#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {

  // Renaming in current working directory
  fs::rename("here/input.txt", "output.txt");
  fs::rename("here/docs", "here/mydocs");

  return 0;
}