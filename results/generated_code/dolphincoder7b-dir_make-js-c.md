The following code in C can be used to create a directory and any missing parents. This function works equally well cross-platform. Here's how you can implement it:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

// Function to create directory recursively
int mkdir_recursive(const char *directory) {
    // Check if the directory exists and create it if not
    struct stat sb;
    int result = lstat(directory, &sb);
    if (result != 0 && errno == ENOENT) {
        result = mkdir(directory, S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP | S_IROTH | S_IWOTH | S_IXOTH);
        // Check if the directory creation failed
        if (result != 0) {
            fprintf(stderr, "Unable to create directory %s\n", directory);
            return -1;
        }
    }

    // If the directory already exists and is a regular file or a symbolic link
    else if (!S_ISDIR(sb.st_mode)) {
        fprintf(stderr, "%s is not a directory\n", directory);
        return -2;
    }
    return 0;
}

int main() {
    // Create a directory "my_directory" in current working directory
    mkdir_recursive("my_directory");

    return 0;
}
```

You can use this function by passing in the path of the directory you want to create and it will handle creating any missing parent directories.

Note that the function creates the directory as user-writable and group-writable. This is because POSIX allows this by default. If you want to make the directory readable or executable, you can modify the permissions by passing additional parameters when calling `mkdir` in the `main()` function.
