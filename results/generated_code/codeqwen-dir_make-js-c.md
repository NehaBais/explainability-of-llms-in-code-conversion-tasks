Below is a C version of your JavaScript code using `opendir`, `readdir`, and `closedir` functions from dirent library. Note that you need to link against the `-ldirent` flag in gcc:

```c
#include <dirent.h>
#include <stdio.h>
#include <string.h>

int mkdirp(const char *path) {
    DIR *d = opendir(path);
    if (d != NULL) {
        closedir(d);
        return 0;  // Directory already exists
    } else if (errno == ENOENT) {
        char p[PATH_MAX];
        size_t len = strlen(path);

        while ((p[len - 1] == '/') || !strchr("/", p[len - 1])) {
            if (!--len) {  // Reached root dir and still not found
                return -1;  // Cannot create root directory
            }
        }

        p[len] = '\0';
        mkdirp(p);  // Recursively create parent directories
        return mkdir(path, 0755) == 0 ? 0 : -1;  // Create the current directory
    } else {
        perror("opendir");
        return -1;
    }
}

int main() {
    printf("%d\n", mkdirp("/path/to/dir"));
    return 0;
}
```

This version has the same recursive behavior as your original code, but is adapted to C syntax and idioms. It also uses PATH_MAX from dirent.h for buffer size rather than hard-coding a limit of 1024 (which may be too small on some systems).
