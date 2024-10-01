In C++, you can use the `stat` function to verify if files and directories exist. The following code has been converted from Golang to C++:

```C++
#include <iostream>
#include <sys/stat.h>

void printStat(const char *p) {
    struct stat info;

    if (stat(p, &info) != 0) {
        std::cout << "Cannot access " << p << std::endl;
    } else if (info.st_mode & S_IFDIR) {
        std::cout << p << " is a directory" << std::endl;
    } else {
        std::cout << p << " is a file" << std::endl;
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

Please note that the stat function returns the file status. If it fails to get the file status (i.e., if it is unable to access the given path), it returns -1. The S_IFDIR flag can be used with the `st_mode` field of the `stat` structure to determine if the path corresponds to a directory.

Also, keep in mind that using `/input.txt` and `/docs` assumes you are running this code on a Unix-like system where paths starting with `/` refer to the filesystem root. This may not work as expected on Windows unless you use raw strings (R"("...")") or double backslashes (`\\`).
