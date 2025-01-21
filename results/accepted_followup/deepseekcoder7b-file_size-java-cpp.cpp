#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

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
    std::cout << "File size of /file.txt: "
              << fs::file<｜begin▁of▁sentence｜> iz(fileB) << " B" << std::endl;
  else
    std::cerr << "/File does not exist." << std::endl;

  return 0;
}