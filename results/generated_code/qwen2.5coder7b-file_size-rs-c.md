Sure, here is the equivalent C code for the provided Rust program. The C code will verify the size of a file called `input.txt` for a file in the current working directory and another one in the file system root.

```c
#include <stdio.h>
#include <stdlib.h>

void exit_err(const char *msg, int code) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit_err("No file name supplied", 1);
    }

    const char *file_name = argv[1];
    FILE *file;
    long size;

    // Open the current working directory file
    file = fopen(file_name, "rb");
    if (!file) {
        exit_err("Failed to open file in current working directory", 2);
    }
    fseek(file, 0L, SEEK_END);
    size = ftell(file);
    fclose(file);
    printf("Size of %s is %ld bytes\n", file_name, size);

    // Open the root directory file
    char *root_file_path;
    asprintf(&root_file_path, "/%s", file_name);
    file = fopen(root_file_path, "rb");
    if (!file) {
        exit_err("Failed to open file in root directory", 3);
    }
    fseek(file, 0L, SEEK_END);
    size = ftell(file);
    fclose(file);
    printf("Size of %s is %ld bytes\n", root_file_path, size);

    free(root_file_path);
    return 0;
}
```

### Explanation:
1. **Argument Parsing**: The C code checks if a file name is provided as an argument. If not, it calls `exit_err` to print an error message and exit with code 1.
2. **File Opening and Size Calculation**:
   - It attempts to open the file in both the current working directory and the root directory (`/`).
   - If a file is successfully opened, it calculates its size by seeking to the end of the file and using `ftell`.
   - The size is then printed.
3. **Error Handling**: If any file operation fails, the program prints an error message and exits with the appropriate code.

### Compilation and Execution:
To compile this C code, you can use a standard C compiler like `gcc`:

gcc -o check_size check_size.c
./check_size input.txt

This will print the sizes of `input.txt` in both the current working directory and the root directory.
