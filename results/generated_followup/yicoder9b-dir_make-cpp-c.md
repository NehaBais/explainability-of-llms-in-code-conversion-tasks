The errors are due to not including the standard library <stdlib.h> which contains declarations for malloc() and free(), and the <string.h> header containing strcpy() and strchr(). 

Here is a corrected version of your code:

```c
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

int create_path(const char *path) {
  char sep = '/';
  struct stat sb;

  /* If the directory already exists, return success */
  if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode))
    return 0;

  char *copy = (char *)malloc(strlen(path) + 1);
  strcpy(copy, path);

  /* Iterate over each directory level */
  for (char *p = strchr(copy + 1, sep); p; p = strchr(p + 1, sep)) {
    *p = '\0';

    if (mkdir(copy, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 &&
        errno != EEXIST) {
      free(copy);
      return -1; /* Couldn't create directory */
    }

    *p = sep;
  }

  free(copy);
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: mkdir <path>\n");
    return -1;
  }

  if (create_path(argv[1]) == 0)
    return 0;
  else {
    fprintf(stderr, "couldn't create directory: %s\n", argv[1]);
    return -1;
  }
}
```
