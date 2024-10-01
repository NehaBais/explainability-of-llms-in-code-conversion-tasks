#include <cstdlib>
#include <fstream>
#include <iostream>

int main() {
  // Get the size of a file called 'input.txt' in current working directory
  std::ifstream file("input.txt", std::ios::ate | std::ios::binary);
  if (!file) {
    std::cerr << "Error: Could not open file 'input.txt'\n";
    exit(2);
  }
  auto size = file.tellg();
  file.close(); // It's important to close the file before using its size
  std::cout << "Size of input.txt is " << size << " bytes\n";

  // Get the size of a file in the root directory, say 'root_file.txt'
  file.open("/path_to_your_directory/root_file.txt",
            std::ios::ate | std::ios::binary);
  if (!file) {
    std::cerr << "Error: Could not open file "
                 "'/path_to_your_directory/root_file.txt'\n";
    exit(2);
  }
  size = file.tellg();
  file.close(); // It's important to close the file before using its size
  std::cout << "Size of '/path_to_your_directory/root_file.txt' is " << size
            << " bytes\n";
  return 0;
}