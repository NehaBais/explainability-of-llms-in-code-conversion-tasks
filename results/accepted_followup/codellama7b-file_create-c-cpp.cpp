#include <boost/filesystem.hpp>
#include <fcntl.h>
#include <iostream>

int main() {
  boost::filesystem::create_directory(
      "docs"); // creates a directory called docs
  std::cout << "Directory created successfully!" << std::endl;
  return 0;
}