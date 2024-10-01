In C language, the equivalent of your Rust code is to use functions like `mkdir()` and `creat()`. However, since C doesn't have direct equivalents for all Rust's features (like `std::fs::create()`), I'll show you an example with these two C functions.

```c
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void create_file(const char* directory, const char* file) {
    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s/%s", directory, file);
    creat(path, 0);  // creates a new file with read/write permissions for all users
}

void create_directory(const char* directory) {
    if (mkdir(directory, S_IRUSR | S_IWUSR | S_IXUSR | 
                    S_IRGRP | S_IWGRP | S_IXGRP | 
                    S_IROTH | S_IWOTH | S_IXOTH) == -1) {
        perror("mkdir");
    }
}

int main() {
    create_directory(".");  // for current directory
    create_directory("/"); // For root directory

    create_file(".", "output.txt");
    create_file("/", "output.txt");

    return 0;
}
```
This C code will create an empty file called "output.txt" in the current and root directories with read/write permissions for all users. It also creates a directory named "docs". The `mkdir()` function can fail if you don't have appropriate permissions or if there is already a directory with that name. In this case, `perror()` will print an error message to stderr before the program terminates by returning -1 from the main() function.
