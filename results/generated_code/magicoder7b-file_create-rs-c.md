 Converting this Rust code to C would be a major undertaking. The Rust code creates two items, an empty file called `output.txt` in the current directory and an empty directory called `docs` at the root of the filesystem. This requires a mixture of file and directory operations which are much more complex in C than they are in Rust. 

Moreover, the error handling in this code is different from how you'd handle errors in C. In this case, an error will terminate the program with an error message and exit status. This doesn't exist natively in C, so you would need to implement it yourself.

Here's a simplified version of what it might look like in C:

```c
#include <unistd.h> // For access() and chdir()
#include <stdio.h>  // For remove(), mkdir(), printf() etc.
#include <stdlib.h> // For exit(), atoi()

const char* FILE_NAME = "output.txt";
const char* DIR_NAME = "docs";

int main(void) {
    create(".", FILE_NAME, DIR_NAME);
    return 0;
}

void create(const char *root, const char *file_name, const char *dir_name){
    // Create file.txt
    FILE* f = fopen("/path/to/"FILE_NAME, "w"); // Replace "/path/to/" with root path.
    if (f == NULL) {
        printf("Error: Could not open file for writing.\n");
        exit(atoi("1"));
    }
    fclose(f);

    // Create dir
    int status = system((char*)"mkdir /"DIR_NAME); // Replace "/" with root path.
    if (status != 0) {
        printf("Error: Could not create directory.\n");
        exit(atoi("1"));
    }
}
```
Remember, this is a simplified version of the code and doesn't cover error checking and cleanup in C as Rust does automatically. You would have to add those yourself.
