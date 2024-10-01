Here is the equivalent C code for your Rust program:

```C
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    char *file_name = (argc > 1) ? argv[1] : "input.txt";
    struct stat buffer;

    if (stat(file_name, &buffer) == -1) {
        perror("Error");
        return 2;
    }

    printf("Size of file.txt is %lld bytes\n", (long long int)buffer.st_size);

    return 0;
}
```
Please note that unlike Rust, C does not have a built-in equivalent to `io::stderr` for writing errors directly to stderr as part of its error handling functions like `exit_err` in your Rust program. Instead, you can use the standard library's own `perror()` function which prints the error message if any is returned from calling stat() or readlink() etc.

Also note that C does not have a built-in way to specify file system root like Rust does. The file "input.txt" will be searched in current working directory as before.
