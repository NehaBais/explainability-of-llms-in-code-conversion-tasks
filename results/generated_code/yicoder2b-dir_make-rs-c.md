Sure, here is the equivalent C code for the given Rust program:

```c
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void) {
    char *dir_path = "./path/to/dir";
    struct stat st;
    if (stat(dir_path, &st) == 0 && S_ISDIR(st.st_mode)) return 0; // The directory already exists
    int ret = mkdir(dir_path, S_IRWXU | S_IRWXG);
    if (ret < 0){
        fprintf(stderr, "Failed to create the directory %s\n", dir_path);
        return -1;
    } else {
        return 0; // Directory created successfully
    }
}
```
Please note that this code should be run in a context where permissions are sufficient for the user or the script is being executed with sudo. In Linux, you can set the execution permissions by running `chmod +x filename`.

Also, please note that the C standard library does not support creating directories recursively like Rust's `fs::create_dir_all` function, so this code will only create the immediate parent directory of the given path if it doesn't already exist. 

To achieve the same effect as Rust's `fs::create_dir_all` would require you to implement your own recursive function for creating directories (as mkdir -p does) and handle any errors that may occur during this process. This is beyond the scope of the question asked, but please see if it helps with understanding how to solve it in C.
