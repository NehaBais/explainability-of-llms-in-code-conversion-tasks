#include
#include
#include
void mkdirp(const char *path) {
  int err = mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  if (err == -1 && errno != EEXIST) {
    perror("mkdir");
    exit(EXIT_FAILURE);
  }
}