#include <fstream>
#include <iostream>

int main() {
  // Verify the size of 'input.txt' in current working directory.
  std::ifstream input_file("input.txt", std::ios::binary);
  input_file.seekg(0, std::ios::end);
  std::streamsize size = input_file.tellg();
  input_file.close();
  std::cout << "Size of input.txt: " << size << " bytes" << std::endl;

  // Verify the size of 'input.txt' in file system root.
  // Note: You may have to replace '/input.txt' with an appropriate path
  // depending on your operating system and environment.
  std::ifstream root_file("/input.txt", std::ios::binary);
  root_file.seekg(0, std::ios::end);
  size = root_file.tellg();
  root_file.close();
  std::cout << "Size of /input.txt: " << size << " bytes" << std::endl;

  return 0;
}