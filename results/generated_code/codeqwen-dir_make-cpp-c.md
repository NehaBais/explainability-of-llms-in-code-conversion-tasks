Below is the C version of your code. Note that you need to link against the `-lstdc++fs` library at compile time, as C doesn't have a built-in filesystem library like C++ does.

```C
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("usage: mkdir <path>\n");
        return -1;
    }

    char pathToCreate[PATH_MAX];
    snprintf(pathToCreate, PATH_MAX, "%s", argv[1]);

    if (mkdir(pathToCreate, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH) == -1 && errno != EEXIST) {
        perror("Couldn't create directory");
        return -1;
    }

    return 0;
}
```

In the C version, we use `mkdir()` to attempt to create a new directory. If it fails and the error is not `EEXIST`, meaning the directory already exists or some other error happened, then we print an error message with `perror()`.
