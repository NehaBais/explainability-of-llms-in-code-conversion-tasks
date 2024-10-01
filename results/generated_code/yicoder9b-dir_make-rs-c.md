Creating a directory in C is a bit more verbose than its Rust equivalent because C does not have built-in support for file system manipulation like Rust. Here's an example of how you can implement this functionality using the `mkdir` function from the POSIX standard:

```c
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

int create_dir(const char *path) {
    return mkdir(path, 0755);
}

void create_dir_all(const char* path) {
    char copy[strlen(path)+1];
    strcpy(copy, path);

    char* dir = strtok(copy, "/");
    int ret;
    while (dir != NULL){
        ret = create_dir(copy);
        if (ret != 0) {
            if (errno != EEXIST) {
                printf("Failed to create directory: %s\n", strerror(errno));
                return;
            }
        }
        dir = strtok(NULL, "/");
    }
}

int main() {
    create_dir_all("./path/to/dir");
    return 0;
}
```

This C code attempts to create a directory for each component of the path from left to right (splitting on '/') and will return an error if it fails and errno is not 'File exists'. Note that `strtok` modifies its string argument, hence why we make a copy of the original path.

Also note that the C standard does not define behavior for mkdir with a relative path when the current working directory has changed since the program started; in practice most systems will behave as expected but some may fail.
