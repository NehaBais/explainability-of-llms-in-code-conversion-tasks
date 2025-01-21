#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Error: No file name supplied" << std::endl;
    return 1;
  }

  try {
    fs::path path = fs::current_path() / argv[1];
    auto size = fs::file_size(path);
    std::cout << "Size of " << path << " is " << size << " bytes" << std::endl;
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 2;
  }

  return 0;
}