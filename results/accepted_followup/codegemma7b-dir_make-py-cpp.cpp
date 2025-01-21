#include <filesystem>

void mkdirp(const std::string &path) {
  std::filesystem::create_directories(path);
}

int main() {
  mkdirp("./path/to/dir");

  return 0;
}