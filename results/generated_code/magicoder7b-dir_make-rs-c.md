 The C programming language does not have a built-in function that can mimic the behavior of `mkdir -p` in unix shells. However, here is an example of how you could write such a function in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

// Create directory and its parent directories if they don't exist
int create_dir(char* path) {
    int i, len;
    char *p = strrchr(path, '/'); // Find the last slash in the path (parent directories)
    
    // If there is no slash, just try to make the directory
    if(!p) return mkdir(path, 0755);
    
    *p = '\0';  // Temporarily cut off the child part of the path
    
    // Recursively create parent directories
    for(i=1; i<=(int)strlen(path); i++) {
        char temp[1024];
        
        strncpy(temp, path, i);
        temp[i] = '\0';
        
        // If the directory does not exist, create it
        if((stat(temp, &st) == -1 || !S_ISDIR(st.st_mode))) {
            int ret;
            
            if ((ret=mkdir(temp, 0755)) < 0 && errno != EEXIST) { // If it's an error but not already exists, return with -1
                printf("Failed to create directory %s: %s\n", temp, strerror(errno));
                return -1;
            }
        }
    }
    
    *p = '/';  // Restore the path (create the child dir)
    
    if((stat(path, &st) == -1 || !S_ISDIR(st.st_mode))) { // If the final directory does not exist, create it
        int ret;
        
        if ((ret=mkdir(path, 0755)) < 0 && errno != EEXIST) { // If it's an error but not already exists, return with -1
            printf("Failed to create directory %s: %s\n", path, strerror(errno));
            return -1;
        }
    }
    
    return 0; // Everything went fine
}
```
In this code, the function `create_dir` takes a string `path` which is supposed to be a full path until the last directory. It then recursively creates the parent directories if they do not exist and finally tries to create the given directory (or subdirectory). If any of these steps fail, it prints an error message and returns `-1`.

Note: The function `stat` is used to check if a file or directory exists. If it does not exist, `stat` will return -1 and then we are creating the required directory. If the directory already exists, `stat` will return 0 and there's no need to create it again.

This C code won't behave identically as rust version because error handling in Rust is more graceful than C, but it fulfills the same purpose of creating directories and their parents if they do not exist.
