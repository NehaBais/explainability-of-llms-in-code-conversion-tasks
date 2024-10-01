This is the converted code in C++:
```cpp
#include <iostream>
#include <string>
#include <sys/stat.h>

void printStat(const std::string& p) {
    struct stat s;

    if (stat(p, &s))
        perror("stat");
    else if (S_ISDIR(s.st_mode))
        std::cout << p << " is a directory\n";
    else
        std::cout << p << " is a file\n";
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");

    return 0;
}
```
The `sys/stat.h` header defines the `struct stat`, which includes information about files and directories, and provides functions to operate on them, including `stat()`. The `printStat()` function prints either a file or directory type. The `main()` function calls this function with different input paths.
