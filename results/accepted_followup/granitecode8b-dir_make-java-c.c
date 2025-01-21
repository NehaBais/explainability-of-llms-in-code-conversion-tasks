#include
#include
void mkdirp(const char *path) {
  size_t len;
  const char *p = strchr(path, '/');
  char dir[PATH_MAX];
  while (p != NULL) {
    len = p - path + 1;
    memcpy(dir, path, len);
    dir[len] = '\\0';
    mkdir(dir);
    path += len;
    p = strchr(path, '/');
  }
}