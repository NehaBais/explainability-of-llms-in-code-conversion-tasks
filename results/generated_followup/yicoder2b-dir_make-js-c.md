The error `Undefined symbols for architecture arm64` usually occurs if the system does not have the necessary dynamic libraries installed, or some functions in them are undefined which cause linker to fail.

In this case, it seems that the system is missing `_main()` function or symbol which is required to start a program. This could be due to either not having an installation of node-gyp on your machine, or not properly initializing node.js runtime environment.

The fix for this would typically involve installing necessary dependencies if not done already and ensuring that the Node.js runtime is correctly initialized. 

On Windows, you need to install npm first.

Next, compile and run your program with `node`. If there's any error related to symbols being undefined, it should be rectified by recompiling your application with updated dependencies.

The corrected C code might look like this:

```c
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

void mkdirp(const char *path) {
  char temp_path[256]; // temporary buffer for the path name
  struct stat st;      // struct for file status
  int i, result;
  const char *slash = "";

  strncpy(temp_path, path, sizeof(temp_path) - 1);

  while ((i = strlen(temp_path)) > 0 && stat(temp_path, &st) == 0 &&
         S_ISDIR(st.st_mode)) { // check if exists and is a directory
    temp_path[i - 1] = '\0';    // remove the existing slash
    slash = "/";
  }

  while (strlen(temp_path) > 0) {
    if ((result = stat(temp_path, &st)) == -1 ||
        !S_ISDIR(st.st_mode)) { // check if exists and is a directory
      if (mkdir((temp_path), 0777) == -1) { // create the directory with default permissions
        perror("mkdir");
        return;
      }
    }
    temp_path[strlen(slash) + strspn(slash, "/\\")] = '\0'; // remove trailing slash or backslash
    slash = strchr(slash, '/');
  }
}
```
Note: This C code assumes that the current user has write access to all parent directories. If not, it could lead to file permissions errors when trying to create the directory with `mkdir()` in the while loop. This might happen on Windows if the current user does not have sufficient permissions.
