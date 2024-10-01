```c
#include <sys/stat.h>
#include <unistd.h>

int main() {
    // Specify the directory path
    const char* dir_path = "C:/parent/test";

    // Create the directory and any missing parents
    if (mkdir(dir_path, 0755) == 0) {
        printf("Directory successfully created\n");
    } else {
        perror("mkdir");
    }

    return 0;
}
```

**Explanation:**

* The `mkdir()` function is used to create a directory.
* The first argument to `mkdir()` is the path to the directory that should be created.
* The second argument is the permissions for the directory. In this case, we use `0755`, which grants read, write, and execute permissions to the owner, read and execute permissions to the group, and read and execute permissions to others.
* The function returns 0 if the directory was successfully created, or -1 if an error occurred.

**Cross-Platform Compatibility:**

The code is compatible with POSIX-compliant systems, including Linux, macOS, and Windows.

**Note:**

* The directory path should be specified in the `dir_path` variable.
* The permissions can be adjusted as needed.
* The `perror()` function is used to print an error message if the `mkdir()` function fails.
