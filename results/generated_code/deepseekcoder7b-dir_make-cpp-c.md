In C, we don't have the `filesystem` library by default. However, you can use standard libraries like `<sys/stat.h>` for checking if a directory exists and creating it using `mkdir()` function. The following code may be used as an example on Linux systems. You will need to adapt this to work with other platforms (e.g., Windows), which might require different APIs or functions:
```c
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>

int mkdir_p(const char *path) {
    struct stat st;
    if (stat(path, &st) == -1) {
        if (mkdir(path, 0700) == -1) { // 0700 is the directory permissions. You can set according to your requirements.
            printf("Cannot create directory %s: %s\n", path, strerror(errno));
            return -1;
        }
    } else if (!S_ISDIR(st.st_mode)) {
        printf("%s exists but is not a directory\n", path);
        return -2;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("usage: mkdir_p <path>\n");
        return -1;
    }
    
    int result = mkdir_p(argv[1]);
    // Check the return value here, e.g., handle errors according to your needs
}
```
This program will create a directory and any missing parents if it does not already exist. It also checks whether the path exists but is not a directory (i.e., a file of that name already exists). The permissions for newly created directories can be set as you please by modifying the argument to `mkdir()` function call in the code.

