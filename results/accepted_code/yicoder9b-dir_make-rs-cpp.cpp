#include <boost/filesystem.hpp>
#include <iostream>

int main() {
  namespace fs = boost::filesystem;
  fs::path dir_path("./path/to/dir");
  try { // Attempt to create directory, if it already exists or can be created
        // successfully return true else false.
    if (!fs::create_directories(dir_path)) {
      std::cerr << "Failed to create directories: " << dir_path << std::endl;
    }
  } catch (const fs::filesystem_error &e) { // Catch any filesystem exceptions
                                            // and print an error message.
    std::cerr << "Filesystem Exception thrown: " << e.what() << std::endl;
  }
  return 0;
}