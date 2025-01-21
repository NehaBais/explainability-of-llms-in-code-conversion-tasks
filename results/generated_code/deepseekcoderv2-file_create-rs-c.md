 Sure, here is the equivalent C code to create an empty file called "output.txt" and an empty directory called "docs" in both the current working directory and the filesystem root:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void create_file(const char *path) {
    FILE *file = fopen(path, "w");
    if (file == NULL) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }
    fclose(file);
}

void create_directory(const char *path) {
    int status = mkdir(path, 0755);
    if (status == -1 && errno != EEXIST) {
        perror("Error creating directory");
        exit(EXIT_FAILURE);
    }
}

int main() {
    // Create in the current working directory
    create_directory("docs");
    create_file("output.txt");

    // Create in the filesystem root
    char root_path[1024];
    if (getcwd(root_path, sizeof(root_path)) == NULL) {
        perror("Error getting current working directory");
        exit(EXIT_FAILURE);
    }
    strcat(root_path, "/docs");
    create_directory(root_path);
    strcat(root_path, "/output.txt");
    create_file(root_path);

    // Create in the filesystem root without using getcwd
    char *root = "/";
    strcpy(root_path, root);
    strcat(root_path, "docs");
    create_directory(root_path);
    strcat(root_path, "/output.txt");
    create_file(root_path);

    return 0;
}
```

### Explanation:
1. **create_file**: This function creates an empty file at the specified path using `fopen` and `fclose`.
2. **create_directory**: This function creates a directory at the specified path using `mkdir`. It checks for errors and exits if there is an issue.
3. **main**: 
   - First, it creates "docs" and "output.txt" in the current working directory.
   - Then, it constructs the full path to the root directory and creates "docs" and "output.txt" there.
   - Finally, it directly specifies the root directory (`"/"`) and creates "docs" and "output.txt" there.

This C code mimics the functionality of creating files and directories as specified in the Rust code.
