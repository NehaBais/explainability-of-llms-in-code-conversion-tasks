#include <filesystem>
#include <iostream>

void mkdirp(const std::string &path) {
  if (!std::filesystem::exists(path))
    std::filesystem::create_directories(path);
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}