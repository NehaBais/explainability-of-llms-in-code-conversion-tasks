 The equivalent C code would be:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void printStat(char *p) {
    struct stat st;
    if (stat(p, &st) != 0) {
        printf("Error: %s\n", strerror(errno));
    } else if (S_ISDIR(st.st_mode)) {
        printf("%s is a directory.\n", p);
    } else {
        printf("%s is a file.\n", p);
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
This C code does the equivalent of Golang's os.Stat(). It checks if "input.txt" and "/input.txt" are directories or files in the current directory and in the root directory respectively.
