#include <filesystem>
#include <fstream>
#include <iostream>

void printFileSize(const std::string &f) {
  try {
    std::filesystem::path filePath(f);
    auto fileStat = std::filesystem::file_status(filePath);

    if (std::filesystem::exists(fileStat)) {
      std::cout << "Size of the file: " << filePath << ": "
                << std::filesystem::file_size(filePath) << " bytes\n";
    } else {
      std::cerr << "File does not exist: " << filePath << "\n";
    }
  } catch (const std::exception &e) {
    std::cerr << "Exception occurred: " << e.what() << "\n";
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");

  return 0;
}