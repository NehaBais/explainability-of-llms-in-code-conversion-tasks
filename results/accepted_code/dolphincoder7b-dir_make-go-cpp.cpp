#include <boost/filesystem.hpp>
#include <iostream>
namespace fs = boost::filesystem;
int main() {
  std::string path = "/tmp/some/path/to/dir";
  if (!fs::exists(path)) {
    fs::create_directories(path);
  }
  return 0;
}