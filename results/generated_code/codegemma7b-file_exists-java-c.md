**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main() {
    // Check for file and directory in current working directory
    if (access("docs/input.txt", F_OK) == 0) {
        printf("File 'docs/input.txt' exists in current working directory.\n");
    } else {
        printf("File 'docs/input.txt' does not exist in current working directory.\n");
    }

    // Check for file and directory in filesystem root
    if (access("/docs/input.txt", F_OK) == 0) {
        printf("File '/docs/input.txt' exists in filesystem root.\n");
    } else {
        printf("File '/docs/input.txt' does not exist in filesystem root.\n");
    }

    return 0;
}
```
