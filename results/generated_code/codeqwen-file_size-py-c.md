In C language, you can use the `stat()` function to get file size in bytes. Here is how your code would look like in C:

```C
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>

int main() {
    struct stat st;

    // Verify the size of a file called input.txt for a file in the current working directory
    if (stat("input.txt", &st) == 0)
        printf("Size of 'input.txt' = %ld bytes\n", st.st_size);
    else
        perror("Error on stat(): ");

    // Verify the size of a file called input.txt in root directory
    if (stat("/root/input.txt", &st) == 0)
        printf("Size of '/root/input.txt' = %ld bytes\n", st.st_size);
    else
        perror("Error on stat(): ");

    return 0;
}
```

Note: Make sure to add appropriate permissions for the root directory if you are trying to access it, since not all users have read permission in `/root`.
