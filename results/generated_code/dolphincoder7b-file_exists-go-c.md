This is the converted code in C:
```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void print_stat(const char* p) {
    struct stat st;
    if (stat(p, &st) != 0) {
        perror(NULL);
        return;
    }

    if (S_ISDIR(st.st_mode)) {
        printf("%s is a directory\n", p);
    } else {
        printf("%s is a file\n", p);
    }
}

int main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
    return 0;
}
```
