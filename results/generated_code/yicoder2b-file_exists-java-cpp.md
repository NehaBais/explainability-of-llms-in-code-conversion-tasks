Sure, here's how you can do it in C++:

```cpp
#include <cstdio>
#include <unistd>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    // checking for file in current working directory
    struct stat filestat;
    if (stat("input.txt", &filestat) == 0 && S_ISREG(filestat.st_mode))
        printf("File 'input.txt' exists\n");
    else
        printf("File 'input.txt' does not exist\n");

    // checking for file in filesystem root
    stat("/docs/input.txt", &filestat);
    if (S_ISREG(filestat.st_mode))
        printf("/docs/input.txt exists and it's a regular file\n");
    else if (S_ISDIR(filestat.st_mode))
        printf("/docs/input.txt exists and it's a directory\n");
    else
        printf("/docs/input.txt exists but it's not a file or a directory\n");
  
    return 0;
}
```

Please note that the `new File()` syntax in Java is equivalent to `stat()` function in C++. You have to import the system library at the beginning of your program for that. Also, be aware that on Unix systems (like Linux and MacOS) you would also need to include sys/stat.h and fcntl.h to get access to stat and file control functions respectively.
