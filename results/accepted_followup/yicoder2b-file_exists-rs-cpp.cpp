#include <filesystem> // for std::filesystem
#include <fstream>    // for std::ifstream, std::ofstream
#include <iostream>   // for std::cout, std::cerr

int main() {
  std::string rootDir = "."; // current directory by default

  // If the parent path exists, then it is a directory.
  if (rootDir != "/") {
    auto parent_path = std::filesystem::path(rootDir).parent_path();
    std::error_code ec;
    if (*parent_path != rootDir) {
      // If the root directory is a file, then its parent path will differ from
      // the actual directory. In this case, use '/' to refer to the filesystem
      // root.
      rootDir = "/";
    } else if (std::filesystem::exists(parent_path, ec)) {
      if (!ec) {
        // If the parent path exists, then it is a directory.
        rootDir += "/docs";
      }
    }
  }

  for (const auto &file : std::filesystem::directory_iterator(rootDir)) {
    std::ifstream ifs(file.path().string(), std::ios::binary);
    if (!ifs) {
      // If any file cannot be opened for reading, print the error message and
      // skip it.
      std::cerr << "Failed to open " << file.path() << '\n';
      continue;
    }
    // If the file can be opened for reading successfully, then print its path.
    std::cout << file.path() << '\n';
  }

  return 0;
}