#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  try {
    // create new empty file "output.txt" of size 0 bytes in CWD
    std::ofstream("output.txt").close();

    // create new empty file "output.txt" of size 0 bytes in FSR
    std::ofstream("/output.txt").close();

    // create an empty directory called "docs" in CWD
    std::filesystem::create_directory("docs");

    // create an empty directory called "docs" in FSR
    std::filesystem::create_directory("/docs");
  } catch (std::exception &e) {
    std::cerr << e.what() << '\n';
  }
}