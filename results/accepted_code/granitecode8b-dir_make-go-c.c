#include
#include
void mkdirp(const char *path) {
  char *copy = strdup(path);
  char *p = copy;
  int mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH;
  for (; *p; p++) {
    if (*p == '/') {
      *p = 0;
      mkdir(copy, mode);
      *p = '/';
    }
  }
  free(copy);
}