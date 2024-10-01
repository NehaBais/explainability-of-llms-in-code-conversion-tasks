#include <cerrno>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  const std::string filename = "input.txt"; // name of the file
  std::ifstream ifs(filename, std::ios_base::ate | std::ios_base::binary);

  if (!ifs.is_open()) {
    std::cerr << "Error: Could not open '" << filename << "'\n";
    return 2; // signal error to calling code
  }

  size_t file_length = ifs.tellg();
  ifs.close();

  std::cout << "Size of '" << filename << "' is " << file_length << " bytes\n";

  return 0; // signal successful completion to calling code
}