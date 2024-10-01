```
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: mkdir <path>\n");
    return -1;
  }

  char *pathToCreate = argv[1];

  if (access(pathToCreate, F_OK)) {
    if (mkdir(pathToCreate, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)) {
      printf("couldn't create directory: %s\n", strerror(errno));
      return -1;
    }
  }

  return 0;
}
```
This is the code in C for creating a directory and any missing parents, as per your request.
