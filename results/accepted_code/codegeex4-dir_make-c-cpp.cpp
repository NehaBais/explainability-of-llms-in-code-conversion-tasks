#include <iostream>
#include <sstream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

int createDirectories(const std::string &path) {
  // Split the string by '/'
  std::vector<std::string> directories;
  std::istringstream ss(path);
  std::string token;
  while (std::getline(ss, token, '/')) {
    if (!token.empty()) { // ignore empty tokens
      directories.push_back(token);
    }
  }

  // Create the path by appending each directory to the previous one
  std::string currentPath = "/";
  for (const auto &dir : directories) {
    currentPath += dir + "/";

    struct stat info;
    if (stat(currentPath.c_str(), &info) != 0 || !S_ISDIR(info.st_mode)) {
      // Directory doesn't exist or isn't a directory, so create it
      if (mkdir(currentPath.c_str(), 0755) < 0) {
        std::cerr << "Couldn't create directory: " << currentPath << '\n';
        return -1;
      }
    } else {
      // Directory already exists and is a directory
      continue;
    }
  }

  return 0;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <path>\n";
    return 1;
  }

  std::string path(argv[1]);
  int result = createDirectories(path);

  return result;
}