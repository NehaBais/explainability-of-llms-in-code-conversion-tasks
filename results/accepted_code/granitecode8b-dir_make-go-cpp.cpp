#include
#include
namespace fs = std::filesystem;
void mkdir_p(const std::string &path) {
  try {
    fs::create_directories(path);
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}
int main() {
  mkdir_p("/tmp/some/path/to/dir");
  return 0;
}