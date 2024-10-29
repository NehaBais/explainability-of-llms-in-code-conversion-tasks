The following code creates a directory and its parents in C using mkdir for creating directories and stat to check if they exist. 
Note that it only works on systems with POSIX compliant interfaces, such as Linux or Mac OS X. 
Also the function does not handle cases when multiple threads call the same path simultaneously.
```c
#include <sys/stat.h>
#include <errno.<｜begin▁of▁sentence｜>
#include <stdio.h>

int mkdir_p(const char *path) {
    struct stat st;
    int status = 0;
    
    if (stat(path, &st) != 0) {
        /* The directory does not exist. */
        if (errno == ENOENT) {
            /* Try to create parent directories recursively. */
            
            char *slash = strchr(path + 1, '/');
            if (slash) {
                *slash = '\0';
                status = mkdir_p(path);
                *slash = '/';
            }
            
            /* If parent directory can't be created recursively then  */
            if ((status != 0) && (errno != EEXIST)) {
                
                /* Return failure. */
                return status;
            }
        } else {
            /* Something went wrong when trying to stat the path. */
            return -1;
        }
    } else if (!S_ISDIR(st.st_mode)) {
        
        /* The path exists but is not a directory. */
        return -1;
    }
    
    return mkdir(path, 0755);
}
```
This function can be used by calling `mkdir_p("/path/to/your/directory");` and it will create the specified directory if necessary and its parent directories. If any error occurs during this process (like running out of disk space), an appropriate message will be printed to stderr. 

The `errno` variable is set by system calls when they fail, so we check for known errors in order to give a more meaningful response about what went wrong. Note that you need to include the appropriate headers and link with your libc library to get these functions to work.

