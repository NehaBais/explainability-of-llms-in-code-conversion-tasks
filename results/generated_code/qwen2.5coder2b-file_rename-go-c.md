The equivalent code in C would look like this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void rename_file(const char *src, const char *dst) {
  if (rename(src, dst) != 0)
    perror("rename");
}

int main() {
  // Current working directory
  char path[PATH_MAX];
  getcwd(path, sizeof(path));
  
  rename_file("input.txt", "output.txt");
  rename_file("docs", "mydocs");
  
  // Root directory
  chdir("/");
  
  rename_file("/input.txt", "/output.txt");
  rename_file("/docs", "/mydocs");

  return EXIT_SUCCESS;
}
```
Please note that the `getcwd()` function should be used only in a terminal command line environment and is not available as a standard library function in C. If you are developing a program running from an IDE, you can use this function for getting current directory.

Also, keep in mind that `chdir("/")` will change the current working directory to the root of the file system which may have different permissions compared to the current directory. Thus, it's better practice to work with current working directory instead of changing it.
