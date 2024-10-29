The equivalent C code would look like this:

```C
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    struct stat st; 

    // for the file in the current working directory
    if (stat("input.txt", &st) == 0) {
        printf("%ld B\n", st.st_size);
    } else {
        printf("File does not exist.\n");
    }
    
    // for the file in the root of the filesystem
    if (stat("/file.txt", &st) == 0) {
        printf("%ld B\n", st.st_size);
    } else {
        printf("File does not exist.\n");
    }
    
   return 0;
}
```
Please note that, to get the size of a file in C, we use 'stat' function from sys/stat.h library which provides details about the given file like size etc., and then print the size (st_size). For checking if the files exist or not, it uses stat function again. If file does not exist, stat will return -1 so prints "File does not exist."

