#include <boost/filesystem.hpp>

void mkdirp(std::string const &path) {
  if (!boost::filesystem::exists(path)) {
    boost::filesystem::create_directories(path);
  }
}