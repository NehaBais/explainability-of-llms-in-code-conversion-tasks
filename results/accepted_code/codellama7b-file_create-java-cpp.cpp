#include <cstdlib>
#include <fstream>
#include <iostream>

int main() {
  std::string output_filename = "output.txt";
  std::string docs_directory = "docs";

  // Create empty file "output.txt" in current working directory and filesystem
  // root
  try {
    std::ofstream output_file(output_filename,
                              std::ios::out | std::ios::binary);
    output_file.close();

    std::ofstream output_root_file("/" + output_filename,
                                   std::ios::out | std::ios::binary);
    output_root_file.close();
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  // Create directory "docs" in current working directory and filesystem root
  try {
    mkdir(docs_directory);
    mkdir("/" + docs_directory);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}