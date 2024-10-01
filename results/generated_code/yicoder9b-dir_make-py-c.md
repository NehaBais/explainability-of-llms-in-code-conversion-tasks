Implementing this in C would require a bit more code and handling it manually as the standard library does not have an equivalent function to mkdir -p. Here's how you might do it:

```c
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int mkdir_p(const char *dir, mode_t mode) { 
    char *copy = strdup(dir); // We need a mutable string copy of dir for the following code
    char *token = strtok(copy, "/");
  
    while (token != NULL) {
        // Create each directory in path sequentially. If one fails, stop and return error
        if (mkdir(dir, mode) == -1 && errno != EEXIST) {
            free(copy); // Don't forget to free the copied string!
            return -1;
        }
        token = strtok(NULL, "/");
    }
  
    // Now that we have created all subdirectories in path, create the directory at the end of it.
    int result = mkdir(dir, mode); 
    free(copy); // Don't forget to free the copied string!
    return result;
}
```

This version uses `strtok` function which modifies its argument and makes a copy of path string for tokenizing. It splits the input directory path by '/' character, then creates each directory it finds in that path. 

Note: In this code, if an error occurs while trying to create one of the directories (like permission denied), it will stop creating further directories and return -1. You may want to handle such errors differently depending on your specific use case.

Also note that mode '0755' is used for new directories. It can be any mode you like but in most cases you would want to give the same permissions as parent directory or maybe make it more restrictive. 

This code assumes that the system supports POSIX-style file paths and operations (like '/'-separated directories). If your system is different, adjustments will be needed! For example Windows uses '\\' as separator character instead of '/'.
