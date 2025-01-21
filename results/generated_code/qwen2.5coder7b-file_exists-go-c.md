To convert the given Go code to C, you can use system calls from the C standard library. Here's a possible implementation:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void print_stat(const char *path) {
    struct stat info;

    if (stat(path, &info) != 0) {
        perror("Error");
    } else if (S_ISDIR(info.st_mode)) {
        printf("%s is a directory\n", path);
    } else {
        printf("%s is a file\n", path);
    }
}

int main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");

    return 0;
}
```

### Explanation:

1. **`struct stat`**: This structure is used to store information about a file or directory. The `stat` function fills this structure with the given path.

2. **`stat(path, &info)`**: This function retrieves information about the file or directory specified by `path`. If an error occurs, it returns -1 and sets `errno`.

3. **`S_ISDIR(info.st_mode)`**: This macro checks if the file is a directory. The `st_mode` field in the `stat` structure contains the file type and permissions.

4. **`perror("Error")`**: This function prints an error message prefixed with "Error" to stderr, using the value of `errno`.

5. **`printf("%s is a directory\n", path)`**: This prints that the given path is a directory if it is indeed a directory.

6. **`printf("%s is a file\n", path)`**: This prints that the given path is a file if it is not a directory.

### Compilation and Execution:

To compile this code, you can use the `gcc` compiler:

gcc -o check_files check_files.c
./check_files

This will execute the program and print whether the specified files and directories exist and what type they are.
