Here's the equivalent C code:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>


int main() {

    char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    int len = sizeof(files)/sizeof(char*));
    for (int i=0; i<len; i++) {
        struct stat file_stat;
        if (stat(files[i], &file_stat), errno != ENOENT) {
            if (file_stat.st_mode & S_IFDIR)) {
                printf("%s is a directory\n", files[i]));
            } else {
                printf("%s is a file\n", files[i]));
            }
        } else {
            printf("%s does not exist\n", files[i]));
        }
    }

    return 0;
}
```

This C code does the same thing as the original Rust code. It verifies that a file called "input.txt" and a directory called "docs" exist in both the current working directory and the root of the filesystem. If any of these files or directories do not exist, it will print out that the file/directory does not exist.
