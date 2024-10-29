#include <experimental/filesystem> // Or #include <filesystem> if your compiler supports std::filesystem (since C++17)
#include <iostream>

namespace fs =
    std::experimental::filesystem; // Or namespace fs = std::filesystem;
                                   // depending on which you choose to use.

int main() {
  fs::path fileA("file.txt");
  if (fs::exists(fileA))
    std::cout << "File size of file.txt: " << fs::file_size(fileA) << " B"
              << std::endl;
  else
    std::cerr << "File does not exist." << std::endl;

  fs::path fileB(
      "/file.txt"); // Be aware that this might need root access to be able to
                    // read the file from system's root directory.
  if (fs::exists(fileB))
    std::cout << "File size of /file.txt: " << fs::file_size(fileB) << " B"
              << std::endl;
  else
    std::cerr << "/File does not exist." << std::endl;

  return 0;
}