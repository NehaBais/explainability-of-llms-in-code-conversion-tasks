The error occurs because `errno` is not declared in C but it exists in C++. To fix this issue, we need to include a header file that defines `errno`. In C++, `errno` is defined in `<cstdlib>`, so we can add `#include <cstdlib>` before using the `errno` variable.

Here's how you can rewrite the corrected code in a single fenced code block:

```c
#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <sys/stat.h>
#include  <cstdlib>

// Function to create directory recursively
int mkdir_recursive(const char  *directory) {
   // Check if the directory exists and create it if not
  struct stat sb;
  int result = lstat(directory, &sb);
  if (result != 0 && errno == ENOENT)  {
    result  = mkdir(directory, S_IRUSR  | S_IWUSR  | S_IXUSR  | S_IRGRP  | S_IWGRP  |
                                  S_IXGRP  | S_IROTH  | S_IWOTH  | S_IXOTH);
     // Check if the directory creation failed
    if (result  != 0) {
      fprintf(stderr, "Unable to create directory %s\n", directory);
      return -1;
     }
   }

   // If the directory already exists and is a regular file or a symbolic link
  else if (!S_ISDIR(sb.st_mode))  {
    fprintf(stderr, "%s is not a directory\n", directory);
    return -2;
   }
  return 0;
}

int main()  {
   // Create a directory "my_directory" in current working directory
  mkdir_recursive("my_directory");

  return 0;
}
```

Now, the code should compile and execute without errors. Note that this code only handles directories; for creating files or symbolic links, you may need to adjust the logic accordingly.
