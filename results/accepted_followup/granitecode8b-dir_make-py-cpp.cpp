#include
#include
namespace fs = std::filesystem;
void mkdirp(const std::string &path) {
  if (fs::exists(path)) {
    return;
  }
  fs::path p(path);
  while (!p.empty()) {
    fs::create_directory(p);
    p.remove_filename();
  }
}