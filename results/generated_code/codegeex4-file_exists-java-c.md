```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    // Check for docs/input.txt in current working directory
    if (access("./docs/input.txt", F_OK) != -1)
        printf("File exists in the current working directory.\n");
    else
        printf("File does not exist in the current working directory.\n");

    // Check for docs/input.txt in root directory
    if (access("/docs/input.txt", F_OK) != -1)
        printf("File exists in the filesystem root.\n");
    else
        printf("File does not exist in the filesystem root.\n");

    return 0;
}
```
