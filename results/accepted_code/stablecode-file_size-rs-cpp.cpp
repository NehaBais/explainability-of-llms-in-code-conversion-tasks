#include <filesystem> // requires C++17
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void exit_err(const std::string &msg, int code) {
  std::cerr << "Error: " << msg << '\n';
  exit(code);
}

int main() {
  if (argc != 2) {
    exit_err("One file name expected", 1);
  }

    const std::string file_name {argv[1] ] };

    try {
      fs::path path{file_name};
      if (!fs::exists(path))
            throw std::runtime_error("File does not exist."));

      std::cout << "Size of file '" << file_name << "' is "
                << fs::file_size(path) << " bytes.\n";
    } catch (const std::exception &e) {
      exit_err(e.what(), 2);
    }

    return 0;
}