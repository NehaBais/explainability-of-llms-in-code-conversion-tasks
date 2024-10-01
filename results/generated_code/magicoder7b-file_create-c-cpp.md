 Below is the equivalent C++ code:

```cpp
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <cstring>

int main() { /* permissions are before umask */
    mode_t mode = 0640; // define file permissions, same as in C code

    int fd = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, mode); /* rights 0640 for rw-r----- */
    if(fd == -1) {
        // file creation error handling here
    }
    close(fd);

    if (mkdir("docs", mode) != 0) { /* rights 0750 for rwxr-x--- */
        // directory creation error handling here
    }
    
    return 0;
}
```

This C++ code does the same as your original C one. The only difference is that, in C++, you need to explicitly define a `mode_t` object to hold file permissions, which is the last parameter of the `open()` and `mkdir()` functions.
