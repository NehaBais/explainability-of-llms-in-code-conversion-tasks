The following is the equivalent C++ code for your Rust task. 

Please note that C++ does not have a direct equivalent of Rust's `File::create()` and `DirBuilder::new().create()`. Instead, we can use the system call `open()` from <sys/stat.h> to create files and directories. Also, instead of having error handling built into the standard library, C++ has a unique `perror` function for printing errors.

```cpp
#include <cstdio>
#include <cerrno>
#include <unistd.h>
#include <sys/stat.h>

void create(const char *root) {
    char file_name[20] = "output.txt";
    char dir_name[6] = "docs";
    int result;

    // concatenate root directory path with the file name
    snprintf(file_name, sizeof(file_name), "%s%s", root, file_name);
    result = open(file_name, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
    if (result == -1) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }
    close(result);

    // concatenate root directory path with the dir name
    snprintf(dir_name, sizeof(dir_name), "%s%s", root, dir_name);
    result = mkdir(dir_name, S_IRUSR | S_IWUSR | S_IXUSR);
    if (result == -1) {
        perror("Error creating directory");
        exit(EXIT_FAILURE);
    }
}

int main() {
    create(".");
    create("/");

    return 0;
}
```

The C++ code first concatenates the root path with file and directory names to form complete paths. It then uses the `open()` function to create a new file, passing in flags to allow read/write access and permissions for the user (`S_IRUSR | S_IWUSR`). The file handle is then closed using `close()`.

For creating directories, it uses the `mkdir()` function, which requires additional permissions for directory creation, as specified by the mode argument. If either operation fails, it calls `perror()` to print an error message and then exits with a failure status code (`EXIT_FAILURE`).

This C++ program creates an empty file named "output.txt" of size 0 bytes in the current working directory and in the root directory ("/"), and an empty subdirectory named "docs".
