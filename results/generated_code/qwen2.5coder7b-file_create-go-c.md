To convert the given Go code to C, you can use system calls from the C standard library. Here's an equivalent implementation in C that achieves the same functionality:

```c
#include <stdio.h>
#include <stdlib.h>

void createFile(const char *fn) {
    FILE *file = fopen(fn, "w");
    if (file == NULL) {
        perror("Failed to open file for writing");
        return;
    }
    printf("File %s created!\n", fn);
    fclose(file);
}

void createDir(const char *dn) {
    if (mkdir(dn, 0777) != 0) {
        perror("Failed to create directory");
        return;
    }
    printf("Directory %s created!\n", dn);
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");

    return 0;
}
```

### Explanation:

1. **createFile Function:**
   - `fopen(fn, "w")`: Opens a file for writing. If the file does not exist, it will be created. If it does exist, it will be truncated to zero length.
   - `perror("Failed to open file for writing")`: Prints an error message if the file cannot be opened.
   - `fclose(file)`: Closes the file.

2. **createDir Function:**
   - `mkdir(dn, 0777)`: Creates a directory with the specified permissions (octal 0777). The function returns 0 on success and -1 on failure.
   - `perror("Failed to create directory")`: Prints an error message if the directory cannot be created.

3. **main Function:**
   - Calls `createFile` and `createDir` twice each with different file/directory names, including absolute paths.

### Notes:
- The permissions for directories are set to 0777 (rwxrwxrwx), which is a very permissive mode and should be used cautiously.
- On some systems, creating files in the root directory (`"/"` or `"/input.txt"`) may require superuser privileges. You might need to run your C program with elevated permissions using `sudo` on Unix-like systems.

This C code will create the specified files and directories in both the current working directory and the filesystem root, similar to the Go code provided.
