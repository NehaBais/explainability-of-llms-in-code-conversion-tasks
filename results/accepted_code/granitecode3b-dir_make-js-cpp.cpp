#include
#include
#include
namespace fs = std::filesystem;
void mkdirp(const std::string &path) {
  try {
    fs::create_directories(path);
  } catch (const std::filesystem::filesystem_error &e) {
    if (e.code() == std::errc::file_exists) {
      // Directory already exists, so ignore the error.
    } else {
      throw;
    }
  }
}
int main() {
  mkdirp("path/to/dir");
  return 0;
}