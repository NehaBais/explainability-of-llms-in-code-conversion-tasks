#include <filesystem>
#include <iostream>

void mkdirp(const std::string &path) {
  namespace fs = std::filesystem;

  if (fs::exists(path)) {
    return;
  }

  // Create missing parents if needed
  fs::create_directories(path);
}