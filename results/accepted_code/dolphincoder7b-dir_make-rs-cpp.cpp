#include <fstream>
#include <iostream>
#include <sstream>
#include <sys/stat.h>
#include <unistd.h>

void create_directories(const std::string &path) {
  // Check if directory exists, create it otherwise
  auto parent = path.substr(0, path.find_last_of('/'));
  if (std::filesystem::exists(parent))
    return;
  create_directories(parent);
  mkdir(path.c_str(), 0755);
}

int main() {
  create_directories("path/to/dir");
  // Other operations here...
}