#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdirp(const char *path) {
  char *current, *next;
  char buffer[256];
  struct stat info;

  strcpy(buffer, path);
  current = strtok(buffer, "/");
  while (current != NULL) {
    next = strtok(NULL, "/");
    snprintf(buffer, sizeof(buffer), "%s/%s", current, next ? next : "");
    if (stat(current, &info) == 0 && S_ISDIR(info.st_mode)) {
      // Directory exists and is a directory, go to the next part
      current = next;
    } else {
      // Directory does not exist or it is not a directory, so make a new one
      if (mkdir(current, 0755) < 0) {
        perror("mkdirp");
        return -1;
      }
      current = next;
    }
  }
  return 0;
}