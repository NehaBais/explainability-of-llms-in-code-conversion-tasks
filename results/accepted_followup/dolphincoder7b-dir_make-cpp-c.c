#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdirs(const char *dirPath, mode_t dirMode) {
  int ret = 0;

  if (mkdir(dirPath, dirMode | S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
    if (errno == ENOENT) {
      /* parent doesn't exist, try to create it  */
      const char *parent = dirname(dirPath);
      if (!mkdirs(parent, dirMode)) {
        /* re-create the directory  */
        if (mkdir(dirPath, dirMode | S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
          perror("mkdir");
          ret = -1;
        }
      }
    } else {
      fprintf(stderr, "Error creating directory '%s': %s\n", dirPath,
              strerror(errno));
      ret = errno;
    }
  }

  return ret;
}