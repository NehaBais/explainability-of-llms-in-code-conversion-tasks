Below is the converted C code:
```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main() 
{
    const char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    size_t i;
    struct stat attr;

    for (i = 0; i < sizeof(files) / sizeof(*files); ++i) {
        if (stat(files[i], &attr) == 0) {
            if (S_ISDIR(attr.st_mode)) {
                printf("%s is a directory\n", files[i]);
            } else {
                printf("%s is a file\n", files[i]);
            }
        } else {
            perror("stat");
        }
    }

    return 0;
}
```
