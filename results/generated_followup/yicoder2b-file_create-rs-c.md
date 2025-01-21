This problem cannot be solved directly with C because C does not provide built-in support for creating directories or empty files like Rust does. It is mainly due to the reason that filesystem operations are handled by operating system's file system drivers, which are compiled and linked with application code separately from its source code. Therefore, C language does not have direct access to these low-level details and does not have a built-in function for creating directories or writing empty files.

Rust on the other hand, has a feature called `DirBuilder` which is used to create directories recursively if they do not exist yet. You can use it to create "docs" directory in root of filesystem. Also, it does have function to create an empty file and write data into it.

Here is how your Rust code would look in C:

```c
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int create(const char *path) {
  struct stat st;
  if (stat(path, &st)) {
    if (mkdir(path, 0755)) { // create the directory and set permissions to
                             // allow read/write access
      fprintf(stderr, "Error creating directory: %s\n", path);
      return -1;
    } else {
      stat(path, &st); // get new stats after directory creation
    }
  }

  // create a file named output.txt of zero bytes
  int fd = open(path "/output.txt", O_WRONLY | O_CREAT | O_TRUNC,
                0644); // truncate to empty (or create if not exists) the file
                       // with permissions 644
  if (fd == -1) {
    fprintf(stderr, "Error opening file: %s\n", path "/output.txt");
    return -1;
  } else {
    close(fd); // don't need the fd now, it's just a placeholder for simplicity
  }
  return 0; // success case
}

int main() {
  if (create(".") == -1 || create("/") == -1) {
    fprintf(stderr, "Failed to create either 'output.txt' or 'docs' in "
                    "current working directory\n");
    return 1; // error case
  }
  return 0; // success case, if both files are successfully created
}
```
To compile and run this code, you would need a C compiler.
