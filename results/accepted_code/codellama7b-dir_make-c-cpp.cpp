#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << basename(argv[0]) << " <path>\n";
    return 1;
  }

  std::string path = argv[1];
  std::string parent_path;
  size_t pos = path.find_last_of('/');
  if (pos != std::string::npos) {
    parent_path = path.substr(0, pos);
  }

  struct stat statBuf;
  if (stat(parent_path.c_str(), &statBuf) == -1) {
    mkdir(parent_path.c_str(), 0755);
  } else if (!S_ISDIR(statBuf.st_mode)) {
    std::cerr << "Couldn't create directory: " << parent_path << "\n";
    return 1;
  }

  mkdir(path.c_str(), 0755);
  return 0;
}