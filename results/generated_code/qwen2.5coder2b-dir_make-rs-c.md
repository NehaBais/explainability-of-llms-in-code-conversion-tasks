The equivalent function in C would be `mkdir`, which can also create parents if they do not exist. Here's how you can implement the same behavior using the POSIX functions:

```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    const char *path = "./path/to/dir";
    
    if (mkdir(path, 0755) == -1 && errno != EEXIST) {
        perror("An Error Occurred!");
        return EXIT_FAILURE;
    }
    
    printf("Directory created successfully.\n");
    return EXIT_SUCCESS;
}
```

In this code:
- `path` is the path string that you want to create.
- `mkdir(path, 0755)` attempts to create the directory at the specified path. The third argument (permissions) specifies the access permissions for the newly created directory and its contents. Here, `0755` represents read, write, and execute permissions for the owner of the directory, read and execute permissions for group members, and no permission for other users.
- If `mkdir` returns -1, it means that an error occurred. The variable `errno` is set to indicate what type of error occurred. In this case, if `errno` is not equal to `EEXIST`, the error occurred and `perror` prints the corresponding message.
- If no error occurs, it prints "Directory created successfully."
