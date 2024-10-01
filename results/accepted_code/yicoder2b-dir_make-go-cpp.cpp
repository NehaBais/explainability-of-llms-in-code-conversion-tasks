#include <string>
#include <sys/stat.h>
#include <unistd.h>

bool createDir(const std::string &path, mode_t mode = 0770) {
  struct stat st;
  if (stat(path.c_str(), &st) == 0 && S_ISDIR(st.st_mode)) {
    return true;
  }
  char *dir = strdup(path.c_str());
  char *token;
  do {
    token = strtok(dir, "/");
    if (!token)
      break;
    struct stat stbuf;
    memset(&stbuf, 0, sizeof stbuf);
    stat(dir, &stbuf);
    // if this directory doesn't exist, attempt to make it
    if (S_ISDIR(stbuf.st_mode) == false) {
      int res = mkdir(dir, mode);
      if (res != 0) {
        return false;
      }
    }
  } while (1);
  free(dir);
  return true;
}