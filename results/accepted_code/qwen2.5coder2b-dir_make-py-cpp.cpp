#include <cerrno>
#include <cstdlib>
#include <dirent.h>
#include <iostream>
#include <sys/stat.h>

void mkdirp(const char *path) {
  // Convert the path string to a C-style string for use with POSIX functions
  const char *cPath = path;

  // Create the directory if it does not exist
  if (mkdir(cPath, 0755) == -1) {
    if (errno == EEXIST) {
      std::cerr << "Directory already exists." << std::endl;
    } else {
      std::cerr << "Failed to create directory: " << strerror(errno)
                << std::endl;
      exit(EXIT_FAILURE);
    }
  }

  // Attempt to create parent directories recursively if they do not exist
  while (true) {
    const char *lastSlash = strrchr(cPath, '/');
    if (lastSlash == nullptr || *lastSlash == '\0')
      break;

    cPath = lastSlash + 1;
    mkdirp(cPath);
  }
}

int main() {
  // Example usage
  mkdirp("./path/to/dir");

  return 0;
}