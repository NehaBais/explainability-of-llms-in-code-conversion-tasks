 C does not have a built-in library to handle filesystem manipulations similar to the C++ Standard Library. To achieve this, you might need to use system calls, which are platform dependent and complex. Below is an example using POSIX functions, but keep in mind that this will work on Unix/Linux only:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>

int create_dir(const char *path) {
    if (mkdir(path, 0755) == -1) {
        if (errno != EEXIST) { // If the error isn't "already exists" then print an error message.
            perror("Couldn't create directory: ");
            return -1;
        }
    }
  
    char *last_sep = strrchr(path, '/');
    if (last_sep) { // There is a parent path in the path. Try to create it recursively.
        if (create_dir(path)) return -1;
    }
    
    return 0; // Directory successfully created or already exists.
}

int main(void) {
   char *argv[] = {"./path/to/dir", NULL};

   if (argc != 2) {
       printf("usage: mkdir <path>\n");
       return -1;
   }
   
   create_dir(argv[1]);
}
```

This code will try to create a directory and any missing parent directories. If it fails, then it will print an error message.
