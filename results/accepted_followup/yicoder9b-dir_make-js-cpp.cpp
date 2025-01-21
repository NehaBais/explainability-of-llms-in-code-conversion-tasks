#include <boost/filesystem.hpp>
#include <iostream>

void mkdirp(const std::string &p) {
  try {
    if (!boost::filesystem::exists(p)) {
      boost::filesystem::create_directories(p);
    }
  } catch (const boost::filesystem::filesystem_error &ex) {
    std::cout << ex.what() << std::endl;
  }
}