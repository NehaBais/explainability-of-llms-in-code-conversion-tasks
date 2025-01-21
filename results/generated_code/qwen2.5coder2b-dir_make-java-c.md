The equivalent of `mkdir -p` in C is to use the standard library function `mkdir()` with the parameter `S_IRWXU | S_IROTH | S_IXOTH`. The function returns 0 on success and -1 on failure. If it fails, you can then print out an error message.

Here's how you could implement this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    const char *dir = "C:/parent/test";
    
    if (mkdir(dir, S_IRWXU | S_IROTH | S_IXOTH) == 0) {
        printf("path successfully created\n");
    } else {
        perror("Error creating directory");
    }
    
    return 0;
}
```

This program creates a directory named `test` in the parent directory of the specified path. If the directory already exists, the `mkdir()` function will not throw an error, and you will need to handle that separately.

Note: This implementation assumes that the directory does not exist. If you want to create an empty directory, you would need a different approach (for example using `mkdir` with additional flags or using other functions like `mkdirat`).
