#include
#include
void mkdirp(const char *path) {
  char dir[PATH_MAX];
  const char *p = NULL;
  size_t len;

  // handle absolute path
  if (path[0] == '/') {
    p = ++path;
  } else {
    p = path + strchr(path, '/') - path;
    if (p != path)
      p--; // handle relative path without a leading slash
    dir[0] = '.';
    dir[1] = '/';
    len = 2;
  }

  while (*p != '\\0') {
    char c = *p++;
    if (c == '/') {
      dir[len] = '\\0';
      mkdir(dir);
      p++; // skip the slash in the next path component
      if (*p == '\\0')
        break;
      dir[len - 1] = '\\'; // restore the trailing slash
      len = strlen(dir);
    } else {
      dir[len++] = c;
    }
  }

  dir[len] = '\\0';
  mkdir(dir);
}
int main() {
  mkdirp("C:/parent/test");
  return 0;
}