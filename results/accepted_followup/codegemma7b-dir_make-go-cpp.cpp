#include <filesystem>

void mkdirp(const std::string &path) {
  std::filesystem::path p(path);
  std::filesystem::create_directories(p);
}