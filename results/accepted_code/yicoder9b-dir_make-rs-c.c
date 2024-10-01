#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int create_dir(const char *path) { return mkdir(path, 0755); }

void create_dir_all(const char *path) {
  char copy[strlen(path) + 1];
  strcpy(copy, path);

  char *dir = strtok(copy, "/");
  int ret;
  while (dir != NULL) {
    ret = create_dir(copy);
    if (ret != 0) {
      if (errno != EEXIST) {
        printf("Failed to create directory: %s\n", strerror(errno));
        return;
      }
    }
    dir = strtok(NULL, "/");
  }
}

int main() {
  create_dir_all("./path/to/dir");
  return 0;
}