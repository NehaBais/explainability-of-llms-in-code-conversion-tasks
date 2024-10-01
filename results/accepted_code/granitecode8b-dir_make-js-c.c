#include
#include
#include
void mkdirp(const char *path, mode_t mode) {
  char *p = (char *)malloc(strlen(path) + 1);
  strcpy(p, path);

  // Remove trailing slash
  if (p[strlen(p) - 1] == '/') {
    p[strlen(p) - 1] = NULL;
  }

  char *dir = (char *)malloc(strlen(p));
  char *part = (char *)malloc(strlen(p));
  int i, j;

  // Split path into parts
  for (i = 0, j = 0; p[i]; i++) {
    if (p[i] == '/') {
      dir[j] = NULL;
      mkdir(dir, mode);
      j = 0;
    } else {
      dir[j++] = p[i];
    }
  }

  // Create last part of path
  dir[j] = NULL;
  mkdir(dir, mode);

  free(p);
  free(part);
  free(dir);
}