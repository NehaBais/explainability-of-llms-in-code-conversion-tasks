The error occurred because the `std::filesystem` library, which provides facilities for file system operations, is not yet part of the C++ standard. The fix involves linking against a filesystem library that is available in some platforms like Ubuntu or MacOS, or by using a different approach such as Boost.Filesystem. 

Here is an example of how to use Boost.Filesystem:

```cpp
#define BOOST_FILESYSTEM_NO_DEPRECATED
#include <boost/filesystem.hpp>

void mkdirp(const std::string &p) {
  boost::filesystem::path path(p);
  try {
    // Attempt to create the directory
    boost::filesystem::create_directories(path);
  } catch (const boost::filesystem::filesystem_error &e) {
    if (e.code() ==
        boost::system::errc::no_such_file_or_directory) {
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
```
This code uses Boost.Filesystem instead of C++17's filesystem library. The `boost::filesystem::create_directories` function is used to create directories and handle errors appropriately.
