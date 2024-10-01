```
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

int main() {
    char *file = "input.txt";
    char *dir = "docs";
    struct stat sb;
    int ret;

    // Verify the existence of input.txt in the current working directory
    if ((ret = stat(file, &sb)) == 0) {
        if (S_ISDIR(sb.st_mode)) {
            printf("%s is a directory\n", file);
        } else {
            printf("%s is a file\n", file);
        }
    } else {
        printf("%s does not exist\n", file);
    }

    // Verify the existence of input.txt in the filesystem root
    if ((ret = stat("/" + file, &sb)) == 0) {
        if (S_ISDIR(sb.st_mode)) {
            printf("%s is a directory\n", "/" + file);
        } else {
            printf("%s is a file\n", "/" + file);
        }
    } else {
        printf("%s does not exist\n", "/" + file);
    }

    // Verify the existence of docs in the current working directory
    if ((ret = stat(dir, &sb)) == 0) {
        if (S_ISDIR(sb.st_mode)) {
            printf("%s is a directory\n", dir);
        } else {
            printf("%s is a file\n", dir);
        }
    } else {
        printf("%s does not exist\n", dir);
    }

    // Verify the existence of docs in the filesystem root
    if ((ret = stat("/" + dir, &sb)) == 0) {
        if (S_ISDIR(sb.st_mode)) {
            printf("%s is a directory\n", "/" + dir);
        } else {
            printf("%s is a file\n", "/" + dir);
        }
    } else {
        printf("%s does not exist\n", "/" + dir);
    }

    return 0;
}
```
