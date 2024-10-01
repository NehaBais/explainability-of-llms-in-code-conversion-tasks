 Unfortunately, there is no direct equivalent of the provided JavaScript code in C since C doesn't have built-in support for working with filesystems. You would need to use a library or system call that allows you to interact with the file system. One such library would be POSIX standard I/O functions such as `stat()`, which can provide information about a file including its size in bytes, but this is not natively supported by C, it has to be included and linked with your code.

Here's an example of how you might use the `stat()` function:

```c
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    struct stat st;

    // Check file in current directory
    if(stat("input.txt", &st) != 0){
        printf("Failed to get stats of input.txt.\n");
        return 1;
    }
    else{
        printf("Size of input.txt in the Current Directory: %ld bytes\n", (long int) st.st_size);
    }

    // Check file in root directory
    if(stat("/input.txt", &st) != 0){
        printf("Failed to get stats of /input.txt.\n");
        return 1;
    }
    else{
        printf("Size of input.txt in the Root Directory: %ld bytes\n", (long int) st.st_size);
    }

    return 0;
}
```

Note that you must have appropriate permissions to read files in C. Also, this code will not work correctly if the input file does not exist or is a directory. It's always good practice to check for these conditions and handle them appropriately.
