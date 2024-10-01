#include <boost/filesystem.hpp>
#include <iostream>

void mkdirp(const std::string &path) {
  try {
    // Create directory structure if it doesn't exist already.
        boost::filesystem::create_directories(boost::filesystem::path(path))));

        std::cout << "Directory created successfully!" << std::endl;
  } catch (const boost::filesystem::filesystem_error &e) {
    // Error handling, print out the error message.
    std::cerr << "Error: " << e.what() << std::endl;
  }
}