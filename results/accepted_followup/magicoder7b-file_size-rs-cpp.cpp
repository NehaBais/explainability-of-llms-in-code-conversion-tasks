#include <cstdlib>
#include <filesystem> // This line has been added to include the filesystem library
#include <fstream>
#include <iostream>
#include <system_error>

void exit_err(const std::string &msg, int code) {
  std::cerr << "Error: " << msg << std::endl;
  std::exit(code);
}

int main() {
  std::string file_name = "input.txt";
  // Get the current working directory
  auto cwd = std::filesystem::current_path();

  try {
    // Create a path from the filename and CWD
    std::filesystem::path p(cwd / file_name);
    // Check if file exists
    if (!std::filesystem::exists(p)) {
      exit_err("File does not exist", 1);
    } else {
      auto sz = std::filesystem::file_size(p);
      std::cout << "Size of " << p.filename() << " is " << sz << " bytes"
                << std::endl;
    }
  } catch (std::system_error &e) {
    exit_err(e.what(), 2);
  }

  return 0;
}