#include <filesystem>
#include <iostream>

void printFileSize(const std::string &f) {
  // Use std::filesystem to get information about the file
  const auto stat = std::filesystem::status(f);
  if (!stat.exists()) {
    // Print an error message if the file does not exist
    std::cout << "File " << f << " does not exist." << std::endl;
  } else {
    // Print the size of the file
    std::cout << stat.file_size() << std::endl;
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}