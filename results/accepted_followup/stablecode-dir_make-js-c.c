#include
#include
#include

int mkdirp(const char *path) {
  DIR *dir;

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