#include <filesystem>

void mkdirp(std::string const &path) {
  if (!std::filesystem::exists(path)) {
    std::filesystem::create_directories(path);
  }
}