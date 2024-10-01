This problem can be solved by using the `std::process::exit()` function to terminate the program when an operation fails. Also, paths should always start with a / (slash) in C to indicate that they are absolute file system paths. Here's how this problem could be converted from Rust to C:

```c
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char err[] = "File move error";

    if (rename("input.txt", "output.txt") == -1) {
        perror(err);
        exit(-1);
    }

    if (rename("docs", "mydocs") == -1) {
        perror(err);
        exit(-1);
    }

    // Since "/input.txt" and "/output.txt" are relative paths in Rust
    // they must be converted to absolute filesystem paths before using rename()
    char path[32]; 
    if (getcwd(path, sizeof(path)) == NULL) {
        perror(err);
        exit(-1);
    }
    strcat(path, "/input.txt");
    if (rename(path, "/output.txt") == -1) {
        perror(err);
        exit(-1);
    }

    // Same as above but for "docs" to "mydocs"
    strcat(path, "/docs");
    if (getcwd(path, sizeof(path)) == NULL) {
        perror(err);
        exit(-1);
    }
    strcat(path, "/mydocs");
    if (rename(path, "/") == -1) {
        perror(err);
        exit(-1);
    }
    return 0;
}
```

Note: Please make sure you have the correct permissions to perform these operations. Also, it is generally a good practice not to use system commands like `rename` inside a function as they can lead to potential security risks if you are running your program under some kind of sandbox or virtualization environment.
