 Sure, here is the equivalent code in C that creates a directory and any missing parents, mimicking the behavior of the `mkdir -p` command:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // for mkdir and access functions

// Function to create a directory and any missing parents
int make_directory(const char *path) {
    if (mkdir(path, 0755) == -1 && errno != EEXIST) {
        perror("Error creating directory");
        return EXIT_FAILURE;
    }
    
    // Check if the path already exists and is a directory
    struct stat sb;
    if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
        printf("Path successfully created\n");
        return EXIT_SUCCESS;
    } else {
        fprintf(stderr, "Failed to create directory: %s\n", path);
        return EXIT_FAILURE;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <path>\n", argv[0]);
        return EXIT_FAILURE;
    }
    
    const char *path = argv[1];
    if (make_directory(path) == EXIT_SUCCESS) {
        return EXIT_SUCCESS;
    } else {
        return EXIT_FAILURE;
    }
}
```

### Explanation:
1. **`mkdir(path, 0755)`**: This function attempts to create the directory with mode `0755`, which means that the owner can read, write, and execute the directory, and everyone else can read and execute it. The `mkdir` function returns -1 if it fails, typically due to permissions or other issues.
2. **`stat(path, &sb)`**: This function checks if the path exists and whether it is a directory using the `S_ISDIR` macro from `sys/stat.h`.
3. **Error Handling**: If the directory creation fails and it's not because the directory already exists (`errno != EEXIST`), an error message is printed using `perror`.
4. **Usage Message**: The program prints a usage message if the number of arguments is incorrect.

### Compilation:
To compile this code, you can use GCC (or any other C compiler):

gcc -o make_dir make_dir.c


### Usage:
Run the executable with the path you want to create as an argument:

./make_dir ./path/to/dir


This code will create the directory and any necessary parent directories if they do not already exist, and it will handle errors appropriately.
