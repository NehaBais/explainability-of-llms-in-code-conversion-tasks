#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void mkdirp(const std::string &path) {
  try {
    fs::create_directories(path);
  } catch (const std::exception &e) {
    // If directory already exists, no exception will be thrown.
    if (!fs::exists(path)) {
      throw;
    }
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}