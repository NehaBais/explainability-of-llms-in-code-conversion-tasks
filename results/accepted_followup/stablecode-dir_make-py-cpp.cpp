#include <iostream>

void mkdirp(const std::string &path) {
  try {
    boost::filesystem::create_directories(boost::filesystem::path(path))));

    std::cout << "Directory created successfully!" << std::endl;
  } catch (const boost::filesystem::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}