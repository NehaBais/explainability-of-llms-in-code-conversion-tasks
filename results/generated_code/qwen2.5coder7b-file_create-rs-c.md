Sure, here is the equivalent C code for creating an empty file called `output.txt` and an empty directory named `docs` in both the current working directory and the filesystem root:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

void create_files_and_dirs(const char* path) {
    const char* full_path_to_file = NULL;
    const char* full_path_to_dir = NULL;

    // Full path to file
    full_path_to_file = malloc(strlen(path) + strlen(FILE_NAME) + 2);
    if (full_path_to_file == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    sprintf(full_path_to_file, "%s/%s", path, FILE_NAME);

    // Full path to directory
    full_path_to_dir = malloc(strlen(path) + strlen(DIR_NAME) + 2);
    if (full_path_to_dir == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free((void*)full_path_to_file);
        exit(1);
    }
    sprintf(full_path_to_dir, "%s/%s", path, DIR_NAME);

    // Create directory
    if (mkdir(full_path_to_dir, 0755) != 0) {
        perror("Error creating directory");
        free((void*)full_path_to_file);
        free((void*)full_path_to_dir);
        exit(1);
    }

    // Create file
    FILE* fp = fopen(full_path_to_file, "w");
    if (fp == NULL) {
        perror("Error creating file");
        free((void*)full_path_to_file);
        free((void*)full_path_to_dir);
        exit(1);
    }
    fclose(fp);

    // Free memory
    free((void*)full_path_to_file);
    free((void*)full_path_to_dir);
}

int main() {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
        perror("Error getting current working directory");
        exit(1);
    }
    create_files_and_dirs(cwd);

    // Create in root directory
    char root_path[] = "/";
    create_files_and_dirs(root_path);

    return 0;
}
```

### Explanation:
1. **Memory Allocation**: The code dynamically allocates memory for constructing the full path to both the file and the directory using `malloc`.
2. **Path Construction**: It constructs the full path by concatenating the given root path with the respective file or directory name.
3. **Directory Creation**: The `mkdir` function is used to create a new directory with permissions set to 0755 (read, write, and execute for owner; read and execute for group and others).
4. **File Creation**: An empty file is created using `fopen` in write mode.
5. **Error Handling**: The code checks if the directory or file creation was successful. If not, it prints an error message and exits with a non-zero status.
6. **Main Function**: It first gets the current working directory and then creates the files and directories in both the current directory and the root (`/`) using `getcwd` and hardcoding the root path respectively.

This C code achieves the same functionality as your Rust code but in a different programming language.
