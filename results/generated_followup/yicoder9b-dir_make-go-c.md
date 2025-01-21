The error is because 'perror', 'printf' functions are undeclared. They are declared under stdio.h library. Therefore, we need to include <stdio.h> in our program. The corrected code would be:

```c
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdio.h>  // Include stdio.h library to use perror and printf functions

int mkdir_p(const char *dir, mode_t mode) {
    char *copy = strdup(dir); // We need to be able to modify the string
    char *token = strtok(copy, "/");

    do {
        if (mkdir(dir, mode) == -1) {
            // If already exists or an error occurred, break.
            if (errno == EEXIST || errno == EACCES)
                break;
            else {
                perror("Failed to create directories.");  // Use perror to print the error message
                return -1; // Return -1 if there's any other kind of error
            }
        }
    } while ((token = strtok(NULL, "/")) && (dir = token));

    free(copy);
    printf("Directories created successfully\n");  // Use printf to print the success message
    return 0;
}

int main() {
    if (mkdir_p("/tmp/some/path/to/dir", 0770) == -1) {
        // Handle error case as you need
    } else {
        printf("Directories created successfully\n");  // Use printf to print the success message
    }
}
```
