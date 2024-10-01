In C, we can use the `stat` function to verify if an item exists and its type. Here is how you can translate this Rust code into C:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    char* paths[] = {"./input.txt", "./docs", "/input.txt", "/docs"};
    int pathCount = 4;
    struct stat buf;

    for (int i=0; i<pathCount; i++) {
        if (stat(paths[i], &buf) != 0) {
            printf("%s does not exist\n", paths[i]);
        } else {
            if (S_ISDIR(buf.st_mode)) {
                printf("%s is a directory\n", paths[i]);
            } else {
                printf("%s is a file\n", paths[i]);
            }
        }
    }

    return 0;
}
```

This C program will check four files and directories: `input.txt`, `docs`, `/input.txt` and `/docs`. It uses the stat function to get information about the item at each path. If stat fails (i.e., it returns -1), the file or directory does not exist. If stat succeeds, S_ISDIR macro is used to check if the item is a directory.
