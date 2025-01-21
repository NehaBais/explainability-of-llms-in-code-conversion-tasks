#include <cstring>  // Include this instead of stdlib.h in standard mode
#include <iostream> // If you're going to use cout or cerr

int mkdirp(const char *path) {
  char buffer[256];
  std::strncpy(buffer, path,
               strlen(path)); // Use std::strncpy instead of manual looping

  // Replace slashes with NULLs and then sort the buffer
  for (int i = 0; i < std::strlen(buffer); ++i) {
    if (buffer[i] == '/') {
      buffer[i] = '\0';
      std::qsort(&buffer[i + 1], std::strlen(buffer) - i - 1, sizeof(char),
                 cmpfunc);
    }
  }

  // Check if the directory exists
  struct stat info;
  if (stat(buffer, &info) == 0 && S_ISDIR(info.st_mode)) {
    return 0; // Directory exists and is a directory, return successfully
  } else {
    // Directory does not exist or it's not a directory so make a new one
    if (mkdir(buffer, 0755) < 0) {
      std::cerr << "mkdirp: " << buffer
                << " failed"; // Output error message to cerr
      return -1;              // Return -1 on failure to indicate a problem
    }
  }

  // If we've gotten here, the directory was not found or could not be created
  // so return -2 for an error.
  return -2;
}