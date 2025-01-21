In C, you cannot rename a file or directory directly like you can in C++. Instead, you need to manipulate the file system using various functions from the `sys/stat.h` and `unistd.h` headers. Here is how you could write this in C:

```c
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    // Define paths
    const char *src1 = "input.txt";
    const char *dst1 = "output.txt";
    const char *src2 = "docs";
    const char *dst2 = "mydocs";

    // Rename files in the current directory
    if (rename(src1, dst1) == 0 && rename(src2, dst2) == 0) {
        printf("Successfully renamed %s to %s\n", src1, dst1);
        printf("Successfully renamed %s to %s\n", src2, dst2);
    } else {
        perror("Error renaming files");
    }

    // Rename files in the root directory
    if (rename("/input.txt", "/output.txt") == 0 && rename("/docs", "/mydocs") == 0) {
        printf("Successfully renamed %s to %s\n", src1, dst1);
        printf("Successfully renamed %s to %s\n", src2, dst2);
    } else {
        perror("Error renaming files");
    }

    return 0;
}
```

Please note that changing directory permissions (like the `/` prefix in `rename()` function) is not necessary as the current user typically has sufficient privileges to perform such operations. You can run this code with root privileges if required, but it is generally considered unsafe due to security reasons.
