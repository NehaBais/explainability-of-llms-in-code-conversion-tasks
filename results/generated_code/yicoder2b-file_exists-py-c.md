Sure, the equivalent C code for your Python script would look something like this:

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    if (access("input.txt", F_OK) == 0) {
        printf("File input.txt exists\n");
    } else {
        printf("File input.txt does not exist\n");
    }

    if (access("/input.txt", F_OK) == 0) {
        printf("File /input.txt exists\n");
    } else {
        printf("File /input.txt does not exist\n");
    }

    if (access("docs", F_OK) == 0) {
        printf("Directory docs exists\n");
    } else {
        printf("Directory docs does not exist\n");
    }

    if (access("/docs", F_OK) == 0) {
        printf("Directory /docs exists\n");
    } else {
        printf("Directory /docs does not exist\n");
    }

    return 0;
}
```
This C code uses the `access` function provided by the standard library to test for file and directory existence. The first argument is the filename or directory path, and the second argument is a flag indicating what to check (F_OK checks if the file/directory exists, others do not). If the return value from the access call is 0, that means the file/directory was found; otherwise it wasn't.
