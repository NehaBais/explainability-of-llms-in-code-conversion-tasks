#include <filesystem> // for std::filesystem
#include <fstream>
#include <iostream> // for std::cout, std::cerr

int main() {
  std::string rootDir = "."; // current directory by default

  if (rootDir != "/") {
    std::error_code ec;
    auto parent_path = std::filesystem::path(rootDir).parent_path();
    if (*parent_path != rootDir) {
      // If the root directory is a file, then its parent path will differ from
      // the actual directory. In this case, use '/' to refer to the filesystem
      // root.
      rootDir = "/";
    } else if (std::filesystem::exists(parent_path, ec)) {
      if (!ec) {
        // If the parent path exists, then it is a directory
        rootDir += "/docs";
      }
    }
  }

  for (const auto &file : std::filesystem::directory_iterator(rootDir)) {
    std::cout << file.path() << "\n";
  }

  return 0;
}