 Certainly! Below is the equivalent C code to achieve the same functionality as the provided Python script:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void create(const char *directory) {
    // Create the file "output.txt" in the given directory
    int fd = open(strcat(strcpy(malloc(strlen(directory) + 8), directory), "/output.txt"), O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error creating file");
        return;
    }
    close(fd);

    // Create the directory "docs" in the given directory
    if (mkdir(strcat(strcpy(malloc(strlen(directory) + 5), directory), "/docs") == -1)) {
        perror("Error creating directory");
        return;
    }
}

int main() {
    // Create "output.txt" and "docs" in the current working directory
    create(".");

    // Create "output.txt" and "docs" in the root directory
    create("/");

    return 0;
}
```

### Explanation:
1. **File Creation**: The `open` function is used to create a file named "output.txt" with write permissions (`O_WRONLY | O_CREAT`) and mode `0644`. If the file cannot be created, an error message is printed using `perror`.
2. **Directory Creation**: The `mkdir` function is used to create a directory named "docs" in the specified location. If the directory cannot be created, an error message is printed using `perror`.
3. **Memory Allocation**: In C, memory allocation for strings must be done manually using functions like `malloc` and `strcpy`. The `strlen` function is used to get the length of the string before allocating memory.
4. **Main Function**: The `main` function calls the `create` function twice: once with the current working directory (`.` represented by a dot) and once with the root directory (`/`).

### Note:
- This C code assumes that the system has appropriate permissions to create files and directories.
- Error handling is minimal for clarity, but you might want to expand it based on your specific requirements and error scenarios.
