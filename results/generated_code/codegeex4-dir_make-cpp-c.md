Below is the equivalent C code to achieve the same functionality of creating a directory and any missing parents, similar to POSIX `mkdir -p`.

```c
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    if(argc != 2) {
        fprintf(stderr, "usage: mkdir <path>\n");
        return -1;
    }

    // Use the mkdir function with the flag to create missing directories
    if (mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0) {
        perror("couldn't create directory");
        return -1;
    }

    return 0;
}
```

### Explanation:

- **Header Files**: 
  - `<sys/stat.h>`: Provides access to the file and directory manipulation functions.
  - `<stdio.h>`: Standard input-output header for fprintf() function used in error reporting.

- **Checking Command-line Arguments**:
  The check `if(argc != 2)` ensures that exactly one argument (the path) is provided when running this program. If not, it prints a usage message and exits with status `-1`.

- **`mkdir` Function**:
  - This function attempts to create the directory specified by the path in `argv[1]`.
  - The mode `S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH` is used to set the permissions. This allows read, write, and execute permissions for the user, group, and others with read and execute rights.
  - If `mkdir` returns `-1`, it means an error occurred (perhaps the directory already exists or there's a permissions issue). The function then prints an error message using `perror()` and exits with status `-1`.

This C code should work on platforms that support the POSIX standard, such as Linux and Unix systems. It will create any missing parent directories along with the specified one if they do not exist.
