#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void mkdirp(const std::string &path) {
  if (fs::exists(path)) {
    return;
  }

  // Create missing parents if needed
  fs::create_directories(path);
}