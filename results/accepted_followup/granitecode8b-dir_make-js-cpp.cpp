#include
#include
#include
namespace fs = std::filesystem;
void mkdirp(const std::string &p) {
  std::error_code ec;
  fs::create_directories(p, ec);
  if (ec) {
    throw std::system_error(ec);
  }
}
int main() {
  try {
    mkdirp("./path/to/dir");
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}