#include <filesystem>

namespace fs = std::filesystem;

void mkdirp(const std::string &path) { fs::create_directories(path); }