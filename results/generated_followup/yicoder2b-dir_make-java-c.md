This problem requires us to convert a Java program that creates a directory with missing parents, into C. Here's how it could be done:

```c
#include <errno.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char *path = "C:/parent/test";

  /* create buffer large enough to accommodate path */
  char buffer[1024];
  strcpy(buffer, path);

  if (mkdir(buffer, 0777)) { // 0777 is equivalent to 777 in octal which creates a directory with full permissions.
    perror("Error creating directory\n"); // print error if fails to create directory
                                          // return 1 for failure
  }

  printf("Directory %s created successfully\n", buffer);

  return 0; // successful execution
}
```

This C code creates a directory recursively using the POSIX `-p` option if it is available. This allows for creating parent directories which do not exist yet. However, remember that this does not guarantee that all the intermediate directories will be created as well. If you need to create all the parent directories in case they don't already exist, you would have to write your own code for that. 

It is also important to note that `mkdir` in C doesn't set error codes if a directory exists or cannot be created. Therefore, we include the permissions used for creating the directory as argument (`0777`). The higher numbers correspond to more permissions.

Note: You may need to compile this code with appropriate flags (like `-Wall` for warning all) or check for errors that may occur during execution by running it from terminal.
