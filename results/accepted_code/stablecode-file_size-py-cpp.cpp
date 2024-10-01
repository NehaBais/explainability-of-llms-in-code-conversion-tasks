#include <filesystem>
#include <iostream>

int main() {
  // Current file path
  const std::string currentFilePath = "./input.txt";

  // Root file path (assumed to be the root directory of the filesystem))
  const std::string rootFilePath = "/input.txt";

  try {
        std::streamsize currentFileSize = std::filesystem::file_size(currentFilePath));
        std::cout << "Current File Size: " << currentFileSize << " bytes"
                  << std::endl;

        std::streamsize rootFileSize = std::filesystem::file_size(rootFilePath));
        std::cout << "Root File Size: " << rootFileSize << " bytes"
                  << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}