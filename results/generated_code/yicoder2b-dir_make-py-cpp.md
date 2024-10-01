The equivalent C++ code for your Python function would be: 

```cpp
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int mkdirp(const char* path) {
    char *current, *next;
    char buffer[256];
    struct stat info;

    strcpy(buffer, path);
    current = strtok(buffer, "/");
    while (current != NULL){
        next = strtok(NULL, "/");
        snprintf(buffer, sizeof(buffer), "%s/%s", current, next ? next : "");
        if(stat(current, &info) == 0 && S_ISDIR(info.st_mode)){
            // Directory exists and is a directory, go to the next part
            current = next;
        } else {
            // Directory does not exist or it is not a directory, so make a new one
            if (mkdir(current, 0755) < 0){
                perror("mkdirp");
                return -1;
            }
            current = next;
        }
    }
    return 0;
}
```
This code creates a directory and any parent directories that do not yet exist. It uses the POSIX function `stat` to check if a directory exists, and `mkdir` to create a new directory if it does not. The use of `snprintf` ensures that the complete path is created including all intermediate directories.
