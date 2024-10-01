#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void mkdirp(char *path) {
  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    int parent;

    // If the error is not "file exists", try to create missing parents
    // recursively.
    if ((parent = getParentDirName(path)) != NULL) {
      mkdirp(parent); // Recursively call itself with the parent directory path

      // If all directories are created successfully, then create the current
      // directory again
      mkdir(path, 0755);
    } else {
      printf("Failed to make directory %s: %d\n", path, errno);
    }
  }
}

// Helper function to get parent directory name from a given path.
char *getParentDirName(const char *path) {
  static char parent[PATH_MAX]; // Assuming PATH_MAX is defined in limits.h
                                // (POSIX standard)

  if ((strrchr(parent, '/') = strrchr(path, '/')) != NULL) {
    strncpy(parent, path,
            strrchr(path, '/') -
                path); // Copy parent directory name to 'parent'
  } else {
    return NULL; // If the given path does not have a parent directory.
  }

  parent[strrchr(path, '/') - path + 1] =
      '\0';              // Remove slash after copying parent dir name
  return strdup(parent); // Return duplicated string to avoid modifying original
                         // 'parent' array
}