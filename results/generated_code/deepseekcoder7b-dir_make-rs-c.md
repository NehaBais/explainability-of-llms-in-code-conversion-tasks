Below is a simple implementation in C using the `mkdir` function of POSIX system calls. This approach will work equally well across platforms (Unix-based, Windows). 

This program creates directories recursively as per the path specified by the argument passed to it.
```c
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int mkdir_p(const char *path) {
    struct stat st; 
    int status = 0;
    
    if (stat(path, &st) != 0) {
        if (mkdir(path, 0755) == -1) {
            perror("Error creating directory");
            return 2; // something went wrong with mkdir
        }
    } else if (!S_ISDIR(st.st_mode)) {
        fprintf(stderr, "Path '%s' exists but is not a directory\n", path);
        return 1; // parent isn't dir or such path doesn't exist
    }
    
    return status;
}

int main() {
    char *path = "./path/to/dir";
    int result = mkdir_p(path);
  
    if (result == 0) { 
        printf("Directory created successfully\n");
    } else {
       printf("Failed to create directory\n");
    }
}
```
The `mkdir_p()` function attempts to stat the path first, checking if it exists. If it does not exist (returns a non-zero value), then we attempt to make that directory using the mkdir(). If an error occurs with mkdir(), the perror() function is called and 2 is returned indicating a problem occurred with creating the directory.

If the path does exist but it isn't a directory, the `mkdir_p()` function prints an appropriate error message and returns 1.

The main function calls this function passing in our target directory path as argument and then handles any return status accordingly.

