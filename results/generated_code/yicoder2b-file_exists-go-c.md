This is the converted code from Golang to C:
```c
#include <stdio.h>
#include <stdlib.h>

void printStat(const char *p) {
    struct stat st;
    if (stat(p, &st) == 0){
        if (S_ISDIR(st.st_mode)){
            printf("%s is a directory\n", p);
        } else {
            printf("%s is a file\n", p);
        }
    } else {
        perror(p);
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
The `stat` function from the `<sys/stat.h>` header is used to get information about a file or directory. The `st_mode` field contains the permissions and type of the file/directory, and `S_ISDIR` checks if it's a directory.

Please note that this code does not handle errors from the `os.Stat()` function properly. In production-level code, you should handle possible error values explicitly.
