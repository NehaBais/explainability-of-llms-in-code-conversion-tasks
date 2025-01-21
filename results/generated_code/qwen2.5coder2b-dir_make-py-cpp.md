Certainly! Below is the equivalent C++ code for creating a directory and ensuring all parent directories are created if they do not exist using the POSIX `mkdir` function with the `O_CREAT` flag. This code also includes error handling to manage potential issues like permission problems.

```cpp
#include <iostream>
#include <dirent.h>
#include <sys/stat.h>
#include <cerrno>
#include <cstdlib>

void mkdirp(const char* path) {
    // Convert the path string to a C-style string for use with POSIX functions
    const char* cPath = path;

    // Create the directory if it does not exist
    if (mkdir(cPath, 0755) == -1) {
        if (errno == EEXIST) {
            std::cerr << "Directory already exists." << std::endl;
        } else {
            std::cerr << "Failed to create directory: " << strerror(errno) << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    // Attempt to create parent directories recursively if they do not exist
    while (true) {
        const char* lastSlash = strrchr(cPath, '/');
        if (lastSlash == nullptr || *lastSlash == '\0') break;

        cPath = lastSlash + 1;
        mkdirp(cPath);
    }
}

int main() {
    // Example usage
    mkdirp("./path/to/dir");

    return 0;
}
```

### Explanation:
1. **Convert to C-style String**: The path string is converted to a `const char*` because POSIX functions require C-style strings.
2. **Create Directory**: Use `mkdir(cPath, 0755)` to create the directory with permissions `0755`. The `0755` value sets the owner and group permissions to read, write, and execute by everyone.
3. **Check for Existence**: If the directory already exists (`errno == EEXIST`), print a message indicating this and return successfully.
4. **Recursive Creation of Parent Directories**: If the directory does not exist, use `while` loop with `strrchr` to find the last slash in the path and recursively call `mkdirp` on the parent directories until reaching the root directory.

### Usage:
You can compile and run this C++ code using a C++ compiler like g++. Make sure you have the necessary permissions to create directories in the specified path.
