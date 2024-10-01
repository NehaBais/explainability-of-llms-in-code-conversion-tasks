#include
#include
#include
namespace fs = std::filesystem;
void mkdirp(const std::string &path) {
  if (fs::exists(path)) {
    return;
  }
  fs::create_directories(path);
}