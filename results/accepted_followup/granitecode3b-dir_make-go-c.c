void mkdirp(const char *path) {
  char *dir;
  int i, len;
  struct stat st;
  for (dir = (char *)path; *dir != '\0'; dir++) {
    if (*dir == '/') {
      *dir++ = '\0';
      break;
    }
  }
  len = strlen(path);
  mkdir(path, 0770);
  for (i = len - 1; i >= 0 && !stat(path, &st); i--) {
    path[i] = '/';
    if (!stat(path, &st)) {
      break;
    }
    path[i] = '\0';
  }
}