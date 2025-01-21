#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  namespace fs = std::filesystem;

  // Current directory
  fs::create_directory(".");

  // Root directory
  fs::create_directory("/");

  return 0;
}