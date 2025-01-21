#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  const char *path = "/tmp/some/path/to/dir";

  if (!fs::exists(path)) {
    fs::create_directories(path);
  }
  return 0;
}