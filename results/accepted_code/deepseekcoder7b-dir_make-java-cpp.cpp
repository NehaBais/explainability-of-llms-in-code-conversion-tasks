#include <boost/filesystem.hpp>
#include <iostream>
namespace fs = boost::filesystem;

void create_directory(const std::string &path) {
  fs::path dir(path);

  if (!fs::exists(dir)) {
    if (fs::create_directories(dir))
      std::cout << "Path successfully created" << std::endl;
  }
}

int main() {
  create_directory("C:/parent/test");
  return 0;
}