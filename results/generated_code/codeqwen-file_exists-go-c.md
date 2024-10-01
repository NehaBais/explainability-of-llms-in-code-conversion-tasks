The equivalent code in C would be:

```c
#include <stdio.h>
#include <sys/stat.h>

void printStat(char *p) {
    struct stat i;
    if (stat(p, &i) != 0) {
        perror("Error");
    } else if (S_ISDIR(i.st_mode)) {
        printf("%s is a directory\n", p);
    } else {
        printf("%s Is a file\n", p);
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");

    return 0;
}
```
This C program does the same as your Go code, but it requires the `stat` function to get information about files and directories, so it must be linked against libc. Also, we use `S_ISDIR()` macro from `sys/stat.h` to check if a given file is a directory or not.
