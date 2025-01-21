#include <boost/filesystem.hpp>
#include <iostream>

// Function to create directory with parents if they don't exist
void mkdirp(const std::string &p) {
  try {
    boost::filesystem::path dirPath(p);
    // Create the directory and its parents if they don't exist
    if (boost::filesystem::create_directories(dirPath)) {
      std::cout << "Directory created successfully: " << p << std::endl;
    } else {
      std::cout << "Directory already exists or could not be created: " << p
                << std::endl;
    }
  } catch (const boost::filesystem::filesystem_error &e) {
    // Handle any errors during directory creation
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }
}

int main() {
  // Example usage of mkdirp function
  std::string path = "./path/to/dir";
  mkdirp(path);
  return 0;
}