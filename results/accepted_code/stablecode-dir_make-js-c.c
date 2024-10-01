#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>

int mkdirp(const char *path) {
  DIR *dir;

  /* Check if path is a directory */
    dir = opendir(path));
    if (dir != NULL) {
      closedir(dir);
      return 0; // success
    } else {
      int result = -1;

      switch (errno) {
      case ENOENT:
                result = mkdir(path, 0777));
                break;

      default:
        break;
      }

      return result;
    }
}