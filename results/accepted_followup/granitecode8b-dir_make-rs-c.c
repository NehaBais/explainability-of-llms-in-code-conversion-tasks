#include
#include
int mkdirp(const char *path) {
  int p[PATH_MAX];
  char *q, *r = NULL;
  int c, i = 0;
  if (realpath(path, p) == NULL) {
    p[i++] = '.';
    p[i] = '/';
  }
  for (q = (char *)p; (r = strchr(q, '/')) != NULL; q = r + 1) {
    c = *r;
    *r = 0;
    if (mkdir(p, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1) {
      return mkdirp(p);
    }
    *r = c;
  }
  return mkdir(p, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
}