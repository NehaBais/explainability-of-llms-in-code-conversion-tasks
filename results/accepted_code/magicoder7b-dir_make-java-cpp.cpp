#include <cstring>
#include <dirent.h>
#include <errno.h>
#include <fstream>
#include <iostream>
#include <sys/stat.h>

void CreateDir(const char *path) {
  DIR *p = opendir(path);

  if (!p) {
    std::cout << "Creating directories... ";

    // Start from the end of the path and work backwards to the root.
    for (int i = strlen(path) - 1; i > 0; --i) {
      if (path[i] == '/') {
        char subPath[256];
        std::strncpy(subPath, path, i + 1); // Copy up to the directory.
        subPath[i + 1] = '\0';              // Ensure null termination.

        if (mkdir(subPath, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 &&
            errno != EEXIST) {
          std::cout << "Failed to create directory " << subPath << ": "
                    << strerror(errno) << "\n";
          return;
        } else {
          std::cout << "Created directory " << subPath << ". ";
        }
      }
    }

    if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 &&
        errno != EEXIST) {
      std::cout << "Failed to create directory " << path << ": "
                << strerror(errno) << "\n";
    } else {
      std::cout << "Successfully created directories.\n";
    }
  } else {
    closedir(p); // If the directory already exists, close it.
  }
}

int main() {
  CreateDir("/parent/test");
  return 0;
}