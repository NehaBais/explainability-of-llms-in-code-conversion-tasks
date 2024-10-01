In C, you can use the `rename()` function provided by libc to rename files and directories. Here is how the code could be converted:

```c
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming input.txt");
    return 1;
  }
  
  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming docs");
    return 1;
  }

  char root_path[PATH_MAX] = "/";
  strcat(root_path, "input.txt");
  if (rename(root_path, strcat(root_path, "output.txt")) != 0) {
    perror("Error renaming /input.txt");
    return 1;
  }

  char root_docs[PATH_MAX] = "/";
  strcat(root_docs, "docs");
  if (rename(root_docs, strcat(root_docs, "mydocs")) != 0) {
    perror("Error renaming /docs");
    return 1;
  }

  return 0;
}
```

This code first uses the `rename()` function to rename the files and directories in the current working directory. Then, it constructs the full paths to the files and directories under the root path (`/`) and renames them there.

The `perror()` function is used to print an error message if any of the `rename()` calls fail. If all operations are successful, the program returns 0; otherwise, it returns a non-zero value.
