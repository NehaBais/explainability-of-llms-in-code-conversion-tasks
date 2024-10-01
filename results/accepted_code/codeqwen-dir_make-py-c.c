#include <sys/stat.h>

int mkdirp(char *path) {
  mode_t mode = S_IRWXU | S_IRWXG | S_IROTH |
                S_IXOTH; // You can change this to your needs
  int result = mkdir(path, mode);
  if (result == 0 || errno == EEXIST) {
    return 0;
  } else {
    perror("mkdirp");
    return -1;
  }
}