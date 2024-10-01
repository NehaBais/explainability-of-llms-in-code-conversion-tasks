C does not have a built-in file system object like JavaScript, therefore you'll need to use the standard C library functions for manipulating files and directories. Here is an equivalent code in C:

```c
#include <stdio.h> 
#include <sys/types.h>  
#include <sys/stat.h> 

int main() {
    struct stat buf;

    if (stat("input.txt", &buf) == 0) {
        printf("Size of input.txt: %ld\n", buf.st_size);
    } else {
        printf("Failed to get size of input.txt\n");
    }

    if (stat("/input.txt", &buf) == 0) {  //Assuming '/' as file system root, this might not be the case for all systems. Adjust according to your system.
        printf("Size of /input.txt: %ld\n", buf.st_size);
    } else {
        printf("Failed to get size of /input.txt\n");
    }
   return 0;
}
```

This C code uses the `stat` function from the sys/stat.h library to retrieve file information including its size. If the `stat` call is successful, it prints out the file's size in bytes. Otherwise, an error message is printed.
