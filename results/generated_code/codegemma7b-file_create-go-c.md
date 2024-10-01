```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int createFile(const char *fn) {
    FILE *f = fopen(fn, "w");
    if (f == NULL) {
        printf("Error creating file %s\n", fn);
        return 1;
    }
    printf("File %s created!\n", fn);
    fclose(f);
    return 0;
}

int createDir(const char *dn) {
    if (mkdir(dn, 0666) == -1) {
        printf("Error creating directory %s\n", dn);
        return 1;
    }
    printf("Directory %s created!\n", dn);
    return 0;
}

int main() {
    if (createFile("input.txt")) {
        return 1;
    }
    if (createFile("/input.txt")) {
        return 1;
    }
    if (createDir("docs")) {
        return 1;
    }
    if (createDir("/docs")) {
        return 1;
    }
    return 0;
}
```

