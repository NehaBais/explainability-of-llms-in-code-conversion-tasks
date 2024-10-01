Sure, I can help you convert this Golang code to C. You'll need to use system calls to accomplish similar functionality in C as there isn't a direct one-to-one mapping of the `mkdir -p` command and its equivalent functions in C standard library. Below is an example using POSIX functions.

Here's how you might implement it:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

void mkdir_p(const char *path) {
    char buffer[1024];
    size_t len = 0;
    const char *p;

    for (p = path; *p != '\0'; p++) {
        buffer[len++] = *p;
        if (*p == '/') {
            /* Check and create the directory */
            buffer[len] = '\0';
            struct stat info;
            if (stat(buffer, &info) != 0) {
                /* Directory does not exist; create it */
                if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0) {
                    perror("Error creating directory");
                    exit(EXIT_FAILURE);
                }
            } else if (!S_ISDIR(info.st_mode)) {
                /* There's already a file with the same name */
                fprintf(stderr, "Not a directory: %s\n", buffer);
                exit(EXIT_FAILURE);
            }
        }
    }

    // Create the last part of the path
    struct stat info;
    if (stat(path, &info) != 0) {
        /* Directory does not exist; create it */
        if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0) {
            perror("Error creating directory");
            exit(EXIT_FAILURE);
        }
    } else if (!S_ISDIR(info.st_mode)) {
        /* There's already a file with the same name */
        fprintf(stderr, "Not a directory: %s\n", path);
        exit(EXIT_FAILURE);
    }
}

int main() {
    mkdir_p("/tmp/some/path/to/dir");
    return 0;
}
```

### Explanation:

1. **`mkdir_p` Function**:
   - This function takes in the path string as an argument.
   - It iteratively traverses each character of the input path, building a directory name and checking if it exists or needs to be created.

2. **Directory Creation Logic**:
   - For each `/` encountered in the path, it checks whether the directory at that point exists.
   - If the directory does not exist (`stat(buffer) != 0`), it attempts to create the directory (`mkdir(buffer)`).
   - It then repeats this process for the final part of the path after the last `/`.

3. **Error Handling**:
   - It checks if the current segment is a file or an existing directory before attempting to create a directory.
   - If any system call fails, it prints an error message and exits.

4. **Main Function**:
   - This function calls `mkdir_p` with the specified path.

This implementation should work cross-platform on systems that support POSIX functions like Linux, macOS, etc.
