#include <boost/filesystem.hpp>
#include <iostream>
namespace fs = boost::filesystem;

void create_directory(std::string path) {
  fs::path dir(path);
  if (!fs::exists(
          dir)) // If the directory does not exist already, it will be created.
    fs::create_directories(dir);
}

int main() {
  try {
    create_directory("C:/parent/test");
    std::cout << "path successfully created" << std::endl;
  } catch (const boost::filesystem::filesystem_error &ex) {
    std::cout << ex.what() << std::endl;
  }
  return <｜begin▁of▁sentence｜ > 0;
}