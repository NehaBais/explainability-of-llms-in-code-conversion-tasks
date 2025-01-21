The error is due to the implicit function declaration for `mkdir`, which was not declared before its use.

To fix this, include the appropriate header file that declares `mkdir`.

Here's the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>

void createFile(const char *fn) {
    FILE *file = fopen(fn, "w");
    if (file == NULL) {
        perror("Failed to open file for writing");
        return;
    }
    printf("File %s created!\n", fn);
    fclose(file);
}

void createDir(const char *dn) {
    if (mkdir(dn, 0777) != 0) {
        perror("Failed to create directory");
        return;
    }
    printf("Directory %s created!\n", dn);
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");

    return 0;
}
```
