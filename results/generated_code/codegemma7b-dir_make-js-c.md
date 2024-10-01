```c
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int mkdirp(const char* path) {
  int status = 0;
  size_t len = strlen(path);

  for (size_t i = 0; i < len; i++) {
    if (path[i] == '/') {
      status = mkdir(path, 0755);
      if (status == -1 && errno != EEXIST) {
        return status;
      }
    }
  }

  return status;
}

int main() {
  // Create directory ./path/to/dir
  int status = mkdirp("./path/to/dir");

  if (status == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory: %s\n", strerror(errno));
  }

  return 0;
}
```

**Explanation:**

* The function iterates over the path string character by character, looking for directory separators (`/`).
* For each separator, it creates the directory using `mkdir()` with the permission `0755`.
* If the directory already exists, `mkdir()` returns an error with `errno` set to `EEXIST`.
* The function ignores this error and continues to the next directory in the path.
* If any error occurs during directory creation, the function returns the corresponding error code.
* If all directories are created successfully, the function returns `0`.
