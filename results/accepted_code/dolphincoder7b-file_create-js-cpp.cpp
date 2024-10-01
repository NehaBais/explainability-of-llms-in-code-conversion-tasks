#include <filesystem>
#include <iostream>

int main() {
  std::error_code err;

  // Create an empty file called "output.txt" of size 0 bytes and write to it.
  std::ofstream output("output.txt");
  if (output.fail()) {
    std::cerr << "Error opening 'output.txt' for writing." << std::endl;
    return -1;
  }
  output.close();

  // Create an empty directory called "docs".
  std::filesystem::create_directory("docs", err);
  if (err) {
    std::cerr << "Error creating directory 'docs'." << std::endl;
    return -1;
  }

  // Create an empty file called "/output.txt" of size 0 bytes and write to it.
  output.open("/output.txt");
  if (output.fail()) {
    std::cerr << "Error opening '/output.txt' for writing." << std::endl;
    return -1;
  }
  output.close();

  // Create an empty directory called "/docs".
  std::filesystem::create_directory("/docs", err);
  if (err) {
    std::cerr << "Error creating directory '/docs'." << std::endl;
    return -1;
  }
}