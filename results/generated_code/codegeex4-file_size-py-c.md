Sure, here is your Python code converted to C:

```C
#include <stdio.h>
#include <sys/stat.h>

int main()
{
    struct stat st;

    // Get size of file in the current working directory.
    if (stat("input.txt", &st) == 0)
        printf("Size of input.txt in current working directory: %ld bytes\n", st.st_size);
    else
        perror("Error getting file size");

    // Get size of file in root directory.
    if (stat("/input.txt", &st) == 0)
        printf("Size of /input.txt in the root directory: %ld bytes\n", st.st_size);
    else
        perror("Error getting file size");

    return 0;
}
```

In this code, `struct stat` is a structure that holds information about a file. The function `stat()` fills in this structure when given a file name as its first argument and the address of the structure to be filled in as its second argument.

If `stat()` returns zero, it means it was successful. Otherwise, an error occurred while trying to get the size of the file, and it is reported with perror().

Note: Running this code will require appropriate permissions to read the files in question.
