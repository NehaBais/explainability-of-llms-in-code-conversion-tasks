```c
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int mkdir_p(const char *path) {
  int status = 0;
  struct stat sb;

  if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
    return 0;
  }

  char *dir = strdup(path);
  char *saveptr;
  char *token = strtok_r(dir, "/", &saveptr);

  while (token != NULL) {
    if (mkdir(token, 0755) == -1 && errno != EEXIST) {
      status = -1;
      break;
    }
    token = strtok_r(NULL, "/", &saveptr);
  }

  free(dir);

  return status;
}

int main() {
  int status = mkdir_p("./path/to/dir");

  if (status == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory.\n");
  }

  return 0;
}
```

**Explanation:**

* The function takes a single path string as input.
* It checks if the directory already exists.
* If the directory does not exist, it iterates over the path components using `strtok_r`.
* For each component, it calls `mkdir` with the appropriate permissions (0755).
* If any `mkdir` call fails with an error other than `EEXIST` (directory already exists), the function returns -1.
* Otherwise, the function returns 0 to indicate success.

**Note:**

* The `mkdir_p` function is cross-platform compatible.
* The permissions used in `mkdir` can be modified to suit your needs.
* Error handling can be further improved based on your specific requirements.
