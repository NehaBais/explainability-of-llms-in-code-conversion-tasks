In C, you can use the `stat()` function to get information about a file or directory. Here's an example of how you could implement the same functionality as the Go code:
```
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

void printStat(const char* p) {
    struct stat st;
    if (stat(p, &st) == 0) {
        if (S_ISDIR(st.st_mode)) {
            printf("%s is a directory\n", p);
        } else {
            printf("%s is a file\n", p);
        }
    } else {
        perror("stat");
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
    return 0;
}
```
This code defines a `printStat()` function that takes a string parameter `p` and uses the `stat()` function to get information about the file or directory at path `p`. If the call to `stat()` is successful, it checks whether the file system object is a directory using the `S_ISDIR()` macro. If the object is a directory, it prints a message indicating that it is a directory. If the object is not a directory, it prints a message indicating that it is a file. If the call to `stat()` fails for any reason, it calls `perror("stat")` to print an error message and returns.

The `main()` function defines four calls to `printStat()`, each passing a different path as the parameter. The first two calls pass paths relative to the current working directory, while the last two pass absolute paths.
