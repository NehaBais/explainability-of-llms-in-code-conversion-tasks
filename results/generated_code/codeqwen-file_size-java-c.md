The equivalent C code for the given Java code would be:

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    struct stat st;
    if (stat("file.txt", &st) == 0)
        printf("%,ld B\n", (long)st.st_size);
    else
        perror("file.txt");

    if (stat("/file.txt", &st) == 0)
        printf("%,ld B\n", (long)st.st_size);
    else
        perror("/file.txt");

    return 0;
}
```

In C, we use the `struct stat` to get information about a file. The function `stat()` is used to fill this structure with information about the given file.
