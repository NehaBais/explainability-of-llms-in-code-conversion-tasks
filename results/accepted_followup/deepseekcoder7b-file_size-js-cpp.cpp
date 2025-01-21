#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
int main() {
  // For the current working directory file
  auto size = fs::file_size("input.txt");
  if (size != static_cast<uintmax_t>(-1))
    std::cout << "Size of input.txt in current dir: " << size << "\n";
  else
    std::cerr << "Could not get file size.\n";

  // For a root directory file
  fs::path p = "/home/user/input.txt";
  auto size2 = fs::file_size(p);
  if (size2 != static_cast<uintmax_t>(-1))
    std::cout << "Size of input.txt in root dir: " << size2 << "\n";
  else
    std::cerr << "Could not get file size.\n";

  return 0;
}