#include <filesystem> // Added line to include filesystem library
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
  std::string dir =
      "path/to/dir"; // Modify this line to include the desired path
  create_directories(dir);
  // Other operations here...
}