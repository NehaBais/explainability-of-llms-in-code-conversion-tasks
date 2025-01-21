#define BOOST_FILESYSTEM_NO_DEPRECATED
#include <boost/filesystem.hpp>

void mkdirp(const std::string &p) {
  boost::filesystem::path path(p);
  try {
    // Attempt to create the directory
    boost::filesystem::create_directories(path);
  } catch (const boost::filesystem::filesystem_error &e) {
    if (e.code() == boost::system::errc::no_such_file_or_directory) {
      // Directory doesn't exist. Make its parent and try again.
      auto pos = p.find_last_of('/');
      if (pos != std::string::npos) {
        mkdirp(p.substr(0, pos));
        mkdirp(p);
      } else {
        throw; // Throw the exception upwards
      }
    } else {
      throw;
    }
  }
}