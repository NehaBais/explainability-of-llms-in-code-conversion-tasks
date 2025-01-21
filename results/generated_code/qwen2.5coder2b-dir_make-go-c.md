The C programming language does not have a built-in function like Golang for creating directories with parent directories. However, you can use the standard library `mkdir` function and check if the directory already exists before attempting to create it. If the directory already exists, you don't need to do anything.

Here's how you could implement this in C:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int make_dir(const char *path, mode_t mode) {
    if (mkdir(path, mode) == 0) {
        return 1; // Directory was created successfully
    } else {
        return -1; // Directory already exists or could not be created
    }
}

int main() {
    const char *dir_path = "/tmp/some/path/to/dir";
    if (make_dir(dir_path, S_IRWXU | S_IXGRP | S_IXOTH) == 1) {
        printf("Directory '%s' was created successfully.\n", dir_path);
    } else {
        perror("Failed to create directory");
    }
    return 0;
}
```

### Explanation:
- **`#include <sys/stat.h>`**: This includes the `stat` structure, which is needed for checking if a directory exists.
- **`#include <unistd.h>`**: This includes the `mkdir`, `chmod`, and `access` functions, which are used to create directories, change their permissions, and check if they exist respectively.
- **`make_dir(const char *path, mode_t mode)` function**:
  - The function takes a path string and a mode for the directory (permissions).
  - It calls the `mkdir` function with the given path and mode.
  - If the function returns 0, it means the directory was created successfully, so it returns 1.
  - If the function returns -1, it means there was an error creating the directory, so it returns -1.
- **`main()` function**:
  - It defines a constant string `dir_path`.
  - It calls the `make_dir` function with `dir_path` and `S_IRWXU | S_IXGRP | S_IXOTH` as permissions (all users have read, write, and execute).
  - Depending on whether the directory was created successfully, it prints an appropriate message.

### Note:
- This code assumes that you are running this program in a Unix-like system where `mkdir`, `chmod`, and `access` functions are available.
- The permission values `S_IRWXU | S_IXGRP | S_IXOTH` set the permissions for the directory to be readable, writable, executable by all users. You can adjust these values as needed.

### Cross-platform Compatibility:
This C code will work on Unix-like systems (Linux, macOS) where the necessary system calls are available. If you need to port this to Windows, you would need to use platform-specific functions or libraries for directory creation and permission management.
