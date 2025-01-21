 To convert the given C++ code to C, we need to use standard C libraries instead of the C++ filesystem library. Here's how you can achieve the same functionality in pure C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_file(const char *filename) {
    FILE *f = fopen(filename, "w");
    if (f != NULL) {
        fclose(f);
    } else {
        perror("Error creating file");
    }
}

void create_directory(const char *dirname) {
    if (mkdir(dirname, 0777) == -1) {
        perror("Error creating directory");
    }
}

int main() {
    // Create "output.txt" in the current working directory
    create_file("output.txt");

    // Create "/output.txt" in the filesystem root (this might not work as expected)
    create_file("/output.txt");

    // Create "docs" directory in the current working directory
    create_directory("docs");

    // Create "/docs" directory in the filesystem root (this might not work as expected)
    create_directory("/docs");

    return 0;
}
```

### Explanation:
1. **File Creation**:
   - The `create_file` function uses `fopen` to open a file named by the provided filename in write mode (`"w"`). If the file is successfully opened, it closes the file. Otherwise, it prints an error message using `perror`.
   
2. **Directory Creation**:
   - The `create_directory` function uses `mkdir` to create a directory named by the provided dirname. The second argument (`0777`) sets the permissions for the new directory (read, write, and execute for everyone). If the directory creation fails, it prints an error message using `perror`.

3. **Main Function**:
   - In the `main` function, we call `create_file` twice: once with `"output.txt"` to create a file in the current working directory and once with `/output.txt` (which might not work as expected due to permissions or limitations). Similarly, we call `create_directory` twice for creating directories in both the current working directory and the filesystem root.

### Note:
- Creating files directly under the root (`/`) is generally restricted due to security reasons and may not be possible without appropriate privileges. Always consider the context (e.g., running as root or using a sandboxed environment) when attempting such operations on a real system.
