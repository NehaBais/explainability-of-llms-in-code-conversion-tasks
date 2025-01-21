#include <exception>
#include <fstream>
#include <iostream>

void printFileSize(std::string f) {
  std::ifstream fileStream;

  try {
    fileStream.open(
        f, std::ios_base::in |
               std::ios_base::ate); // Open the file and go to end of file
    if (!fileStream.is_open()) {
      throw std::runtime_error("Unable to open " + f);
    }

    std::streamsize fileSize =
        fileStream.tellg(); // Get the position, which is the size in bytes
    std::cout << "File '" << f << "' size: " << fileSize << " Bytes\n";
  } catch (const std::exception
               &e) { // Catch any exceptions that occur during this process
    std::cerr << "Caught exception: " << e.what() << '\n';
  }
}

int main() {
  printFileSize("input.txt");
  // Note, on Windows it may require `\\` instead of `/` at the beginning for
  // the root directory (i.e., `"\\input.txt"`)
  printFileSize("/input.txt");
}