#include <filesystem>

namespace fs = std::experimental::filesystem;

void mkdirp(const std::string &path) { fs::create_directories(path); }