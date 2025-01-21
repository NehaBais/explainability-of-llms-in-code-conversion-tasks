 Certainly! Below is the equivalent C code to create a directory and any missing parent directories, similar to the `mkdir -p` command in POSIX. This implementation uses standard C libraries (`stdio.h`, `stdlib.h`, and `unistd.h`) which are available on most platforms.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

// Function to create a directory and any missing parent directories
int mkdir_p(const char *path) {
    // Create a temporary copy of the path since strncpy doesn't add null terminator if source is shorter
    char *temp_path = (char *)malloc(strlen(path) + 1);
    if (!temp_path) {
        perror("Failed to allocate memory");
        return -1;
    }
    strcpy(temp_path, path);

    // Check and create parent directories
    for (char *p = temp_path + 1; *p != '\0'; ++p) {
        if (*p == '/' && p != temp_path) {
            *p = '\0';
            if (mkdir(temp_path, S_IRWXU | S_IRWXG | S_IRWXO) == -1 && errno != EEXIST) {
                free(temp_path);
                return -1;
            }
            *p = '/';
        }
    }

    // Create the final directory
    if (mkdir(temp_path, S_IRWXU | S_IRWXG | S_IRWXO) == -1 && errno != EEXIST) {
        free(temp_path);
        return -1;
    }

    free(temp_path);
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (mkdir_p(argv[1]) == -1) {
        perror("Failed to create directory");
        return EXIT_FAILURE;
    } else {
        printf("Directory created successfully.\n");
        return EXIT_SUCCESS;
    }
}
```

### Explanation:
1. **Memory Allocation**: The `malloc` function is used to allocate memory for the path string. This ensures that there's enough space for the null terminator.
2. **Directory Creation**: The loop iterates over each character in the path, checking if a slash (`/`) indicates a new directory level. If so, it temporarily null-terminates the string at that point and attempts to create the directory using `mkdir`.
3. **Error Handling**: If `mkdir` fails and it's not because the directory already exists, an error is reported with `perror`.
4. **Memory Deallocation**: After use, memory allocated for the path string is freed.
5. **Main Function**: The `main` function takes a single argument (the directory to create) and calls `mkdir_p` with it. If no arguments are provided or if there's an error in creating the directory, usage information is printed.

This code should work on most POSIX-like systems where C standard libraries are available.
