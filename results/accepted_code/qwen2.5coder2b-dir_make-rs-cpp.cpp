#include <cerrno>
#include <iostream>

bool createDir(const std::string &path) {
  if (mkdir(path.c_str(), S_IRWXU | S_IXGRP | S_IROTH)) {
    if (errno != EEXIST) {
      std::cerr << "Error creating directory: " << strerror(errno) << '\n';
      return false;
    }
  } else {
    return true;
  }
}

int main() {
  std::string path = "./path/to/dir";
  if (!createDir(path)) {
    std::cout << "Failed to create directory." << std::endl;
  } else {
    std::cout << "Directory created successfully." << std::endl;
  }

  return 0;
}