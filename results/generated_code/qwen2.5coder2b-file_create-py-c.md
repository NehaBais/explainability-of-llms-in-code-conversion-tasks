In C, the `open` function is used to create or open files and directories. The `mkdir` function is used to create new directories.
Here's how you can convert the Python code to C:
```c
#include <stdio.h>
#include <stdlib.h>

void create(char* directory) {
    if (access(directory, F_OK) == -1) { // Check if the directory already exists
        mkdir(directory, 0777); // Create a new directory with default permissions
    }
}

int main() {
    create(".");
    create("/");
    return 0;
}
```
This C code does the same thing as the Python code. It first checks if the directory exists using the `access` function. If it doesn't exist, it creates a new directory in the current working directory and the filesystem root with default permissions (777). The `mkdir` function takes two arguments - the path to the directory to be created and the permission mode.
Please note that C does not support writing to files or directories that do not exist. Therefore, if you try to write to a non-existent file or create a non-existent directory in C, it will result in errors. It's important to use error handling mechanisms to manage these cases appropriately in your code.
