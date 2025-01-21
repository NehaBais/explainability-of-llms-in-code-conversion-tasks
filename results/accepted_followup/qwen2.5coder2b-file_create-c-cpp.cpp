#include <filesystem> // Add this line
#include <fstream>
#include <iostream>

int main() {
  // Create a new empty file "output.txt" of size 0 bytes
  std::ofstream output("output.txt", std::ios_base::trunc | std::ios_base::out);
  if (!output.is_open()) {
    std::cerr << "Error creating or opening output.txt" << std::endl;
    return 1;
  }
  output.close();

  // Create a new empty directory "docs"
  std::filesystem::create_directory("docs");

  return 0;
}