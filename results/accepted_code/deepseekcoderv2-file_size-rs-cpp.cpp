#include <cstdlib> // for exit()
#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void exit_err(const std::string &msg, int code) {
  std::cerr << "Error: " << msg << std::endl;
  std::exit(code);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    exit_err("No file name supplied", 1);
  }

  std::string file_name = argv[1];
  fs::path path(file_name);

  // Check in the current working directory first
  if (!fs::exists(path)) {
    path = fs::absolute(path); // Convert relative to absolute path
  }

  if (fs::exists(path) && fs::is_regular_file(path)) {
    std::ifstream file(path, std::ios::binary | std::ios::in);
    file.seekg(0, std::ios::end);
    std::cout << "Size of " << file_name << " is " << file.tellg() << " bytes"
              << std::endl;
  } else {
    exit_err("File does not exist", 2);
  }

  return 0;
}