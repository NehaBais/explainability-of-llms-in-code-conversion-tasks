The equivalent C code for the given C++ code is:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Create an empty file named "output.txt"
    if (system("touch output.txt") != 0) {
        perror("Failed to create 'output.txt'");
        return 1;
    }

    // Create an empty directory named "docs"
    if (mkdir("docs", 0777) != 0) {
        perror("Failed to create 'docs'");
        return 1;
    }

    // Repeat the process for the filesystem root
    if (system("touch /output.txt") != 0) {
        perror("Failed to create '/output.txt'");
        return 1;
    }
    if (mkdir("/docs", 0777) != 0) {
        perror("Failed to create '/docs'");
        return 1;
    }

    printf("Files and directories created successfully.\n");

    return 0;
}
```

Please note, this code assumes that the operating system supports the `touch` command on the local filesystem and the `mkdir` function for creating directories at the root of the file system. If this is not the case, you may need to use different methods or libraries to achieve similar functionality in C.
