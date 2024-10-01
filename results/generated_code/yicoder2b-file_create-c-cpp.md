This is how you can convert the given C code to C++. First of all, we need to include all necessary libraries. The functions `open()` and `creat()` are used for file operations while `mkdir()` is used for directory creation.

```cpp
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
  /* permissions are before umask */
  const mode_t perms = 0640; /* rights 0640 for rw-r----- */
  // equivalent to opening file
  int fd = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, perms);
  if (fd == -1) { // error occurred
    perror("Error in creating output.txt\n");
    return EXIT_FAILURE;
  }
  // equivalent to closing file descriptor
  close(fd);

  /* equivalent to creating directory */ 
  const int dir_flags = 0750; /* rights 0750 for rwxr-x--- */
  if (mkdir("docs", dir_flags) == -1) { // error occurred
    perror("Error in creating docs\n");
    return EXIT_FAILURE;
  }

  return 0;
}
```
This script will create "output.txt" and a directory called "docs" with permissions of rwxr-x---, if these files or directories already exist, they will be replaced.
