 The error occurred because the C compiler couldn't find the 'create()' function declaration before it was used (implicitly). When you define functions, they must be declared before they are called. Also, there were issues with the 'fopen()' and 'system()' functions as well which required passing in the correct arguments.

Here is the corrected code:

```c
#include <stdio.h>  // For remove(), mkdir(), printf() etc.
#include <stdlib.h> // For exit(), atoi()
#include <unistd.h> // For access() and chdir()

const char *FILE_NAME = "output.txt";
const char *DIR_NAME = "docs";

// Declaration of create function before usage
void create(const char* root, const char* file_name, const char* dir_name); 

int main(void) {
    create(".", FILE_NAME, DIR_NAME);
    return 0;
}

void create(const char *root, const char *file_name, const char *dir_name) {
    // Create file.txt
    FILE *f = fopen("/path/to/" FILE_NAME, "w"); // Replace "/path/to/" with root path.
    if (f == NULL) {
        printf("Error: Could not open file for writing.\n");
        exit(atoi("1"));
    }
    fclose(f);

    // Create dir
    int status = system((char *)"mkdir /" DIR_NAME); // Replace "/" with root path.
    if (status != 0) {
        printf("Error: Could not create directory.\n");
        exit(atoi("1"));
    }
}
```

In this corrected code, I have placed the 'create()' function declaration before it is used, as C requires functions to be declared before they are called. Also, when using 'fopen()', you should pass in a valid file path and "w" for write mode instead of trying to concatenate the strings. Similarly, for 'system()', make sure you pass in the correct directory path.
