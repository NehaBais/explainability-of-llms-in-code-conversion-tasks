In C, we don't have the same level of support for IO and file operations as in Rust. For this reason, we'll need to use the system call `stat` from `sys/stat.h` library.
Here is a C translation of your code: 
```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main(void) {
    struct stat st;
    char *file_names[] = {"input.txt", "/input.txt"}; // adjust paths as needed
    int i;

    for (i = 0; i < sizeof(file_names)/sizeof(char*); ++i) {
        if (stat(file_names[i], &st) == 0){
            printf("Size of %s is: %ld bytes\n", file_names[i], st.st_size);
        } else {
          fprintf(stderr, "Error getting stats for %s\n",  file_names[i]);
          return 2;
        }
    }
    return 0;
}
```

In the C code above:
- We create a struct of type `stat` which contains information about file.
- The function `stat()` is used to get information about a file. If it succeeds, it returns 0 and populates the stat buffer with information about the file; if it fails, it returns -1 and sets `errno`.
- We create an array of strings containing paths to files we want to check. Adjust this as necessary for your project's needs.
