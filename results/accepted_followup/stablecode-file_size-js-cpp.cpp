#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Current File
  fs::path currentFilePath("input.txt");
  std::cout << "Size of input.txt in the working directory: "
            << fs::file_size(currentFilePath) << "\n";

  // Root File
    fs::path rootFilePath("/input.txt"));
    if (fs::exists(rootFilePath)) {
      std::cout << "Size of input.txt in the root directory: "
                << fs::file_size(rootFilePath) << "\n";
    } else {
      std::cout << "File input.txt does not exist in the file system root.\n";
    }

    return 0;
}