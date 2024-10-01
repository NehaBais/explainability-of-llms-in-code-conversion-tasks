#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void) {
  const char *path = "./path/to/dir";
  struct stat sb;

  if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
    printf("Directory already exists\n");
    return 0;
  } else {
    char *parents = strdup(path);
    char *slash = strrchr(parents, '/');
    if (slash) {
      slash[0] = '\0';
      mkdir(parents, 0755);
    }
    free(parents);
  }
}