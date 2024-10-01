#include <fstream>
#include <iostream>
#include <string.h>
#include <sys/stat.h>

int main() {
  std::string fileName = "output.txt";
  std::string dirName = "docs";
  const char *rootDir = "/";

  // Create files and directories in the current working directory.
  std::ofstream file(fileName);
  if (!file) {
    std::cerr << "Failed to create file: " << fileName << '\n';
    return 1;
  }
  file.close();

  struct stat info;
  if (stat(dirName.c_str(), &info) != 0 || !(info.st_mode & S_IFDIR)) {
    // Directory does not exist or it's not a directory.
    if (mkdir(dirName.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1) {
      std::cerr << "Failed to create directory: " << dirName << '\n';
      return 1;
    }
  }

  // Create files and directories in the root directory.
  file.open(rootDir);
  if (!file) {
    std::cerr << "Failed to open root directory.\n";
    return 1;
  }
  file.close();

  fileName = rootDir;
  fileName += "output.txt";
  file.open(fileName);
  if (!file) {
    std::cerr << "Failed to create file: " << fileName << '\n';
    return 1;
  }
  file.close();

  dirName = rootDir;
  dirName += "docs";
  if (stat(dirName.c_str(), &info) != 0 || !(info.st_mode & S_IFDIR)) {
    // Directory does not exist or it's not a directory.
    if (mkdir(dirName.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1) {
      std::cerr << "Failed to create directory: " << dirName << '\n';
      return 1;
    }
  }

  return 0;
}