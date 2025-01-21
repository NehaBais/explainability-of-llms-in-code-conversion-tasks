#include <filesystem>
#include <iostream>

int main() {
  namespace fs = std::filesystem;

  try {
    auto size1 = fs::file_size("input.txt");
    std::cout << "Size of input.txt: " << size1 << " bytes\n";

    // Note that this will fail if you are not running as an administrator
    // or the file does not exist in root directory, etc.
    auto size2 = fs::file_size("C:\\input.txt");
    std::cout << "Size of C:\\input.txt: " << size2 << " bytes\n";
  } catch (const std::filesystem::filesystem_error &err) {
    // Handle any errors that occurred when getting file sizes
    std::cerr << err.what() << '\n';
  }

  return 0;
}