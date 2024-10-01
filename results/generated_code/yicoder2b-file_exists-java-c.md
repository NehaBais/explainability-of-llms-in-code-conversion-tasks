Sure, here's how you can do it in C language: 

In the current working directory - 
```c
#include <stdio.h>
#include <unistd.h>

int main() {
    char path[1024];
    snprintf(path, sizeof(path), "%s", "/home/user/docs/input.txt"); // Assuming the file is in /home/user/docs directory
    if (access(path, R_OK) == 0) {
        printf("File exists\n");
    } else {
        printf("File does not exist\n");
    }
    if (access("/input.txt", R_OK) == 0) {
        printf("File exists\n");
    } else {
        printf("File does not exist\n");
    }
    return 0;
}
```

In both codes above, we are using the `access()` function from the unistd.h library to check if a file or directory exists. The path is set in a string format. If the path leads to an existing file and the user has read permission on it, then "File exists" will be printed; otherwise, "File does not exist" will be printed.
