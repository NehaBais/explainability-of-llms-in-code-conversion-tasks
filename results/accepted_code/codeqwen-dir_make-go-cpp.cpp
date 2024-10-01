#include <iostream>
#include <sys/stat.h>

void mkdir_all(const std::string &path, mode_t mode) {
  size_t pos = 0;
  while (true) {
    pos = path.find('/', pos);
    if (pos == std::string::npos) {
      break;
    }

    std::string subpath = path.substr(0, pos);
    if (!mkdir(subpath.c_str(), mode)) {
      // if directory already exists, don't error out
      // (POSIX mkdir doesn't fail if the dir already exists)
      perror("Failed to create directory");
      continue;
    } else {
      int result = errno;
      if (result != EEXIST && result != ENOENT) {
        // If a different error occurs, don't ignore it
        std::cerr << "Error creating directory: " << strerror(result)
                  << std::endl;
        exit(1);
      }
    }

    pos++; // Skip '/' to avoid repeated creation of root dir
  }

  if (!mkdir(path.c_str(), mode)) {
    return;
  } else {
    int result = errno;
    if (result != EEXIST) {
      std::cerr << "Error creating directory: " << strerror(result)
                << std::endl;
      exit(1);
    }
  }
}

int main() {
  mkdir_all("/tmp/some/path/to/dir", 0770);
  return 0;
}