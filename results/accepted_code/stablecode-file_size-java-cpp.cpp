#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path fileAPath("file.txt");
  uintmax_t sizeA = std::filesystem::file_size(fileAPath);
  std::cout << "File A: " << sizeA << " bytes" << std::endl;

  std::filesystem::path fileBPath("/file.txt");
    uintmax_t sizeB = std::filesystem::file_size(fileBPath));
    std::cout << "File B: " << sizeB << " bytes" << std::endl;

    return 0;
}