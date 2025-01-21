#include <experimental/filesystem>
#include <iostream>

int main() {
  std::experimental::filesystem::path fileAPath("file.txt");
  uintmax_t sizeA = std::experimental::filesystem::file_size(fileAPath);
  std::cout << "File A: " << sizeA << " bytes" << std::endl;

  std::experimental::filesystem::path fileBPath("/file.txt");
    uintmax_t sizeB = std::experimental::filesystem::file_size(fileBPath));
    std::cout << "File B: " << sizeB << " bytes" << std::endl;

    return 0;
}