#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void create(fs::path directory) {
  std::ofstream file(directory / "output.txt");
  file.close();

  try {
    fs::create_directory(directory / "docs");
  } catch (const fs::filesystem_error &e) {
    std::cout << e.what() << std::endl;
  }
}

int main() {
  create("."); // current directory
  if constexpr (fs::path::string_type::value_type == '\\')
    // For Windows you need to specify the root as "C:\\" not just "/"
    create("C:\\"); // root directory
  else
    create("/"); // root directory for Unix based systems.
}