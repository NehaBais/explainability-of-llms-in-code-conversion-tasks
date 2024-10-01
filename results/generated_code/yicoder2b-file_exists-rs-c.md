The equivalent code in C would be:

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    const char *file = "input.txt";
    struct stat buf;
  
    // Check if file exists
    if (stat(file, &buf) == 0) {
        if (S_ISDIR(buf.st_mode)) {
            printf("%s is a directory\n", file);
        } else {
            printf("%s is a file\n", file);
        }
    } else {
        printf("%s does not exist\n", file);
    }
  
    // for "/input.txt" in root directory
    if (stat("/input.txt", &buf) == 0) {
        if (S_ISDIR(buf.st_mode)) {
            printf("/input.txt is a directory\n");
        } else {
            printf("/input.txt is a file\n");
        }
    } else {
        printf("/input.txt does not exist\n");
    }

    return 0;
}
```
Please note that the `stat()` function returns 0 if the operation is successful, which means it checks whether a file exists or not. Then we check the `st_mode` (mode of the inode) to determine whether the entry is for a directory. This C code should work on Unix-like operating systems such as Linux and macOS.
