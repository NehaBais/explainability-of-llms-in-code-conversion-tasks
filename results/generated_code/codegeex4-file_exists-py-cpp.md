Sure, here is the equivalent C++ code:

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

int main() {
    // Checking for input.txt and docs in current directory
    std::ifstream file("input.txt");
    bool fileExists = file.good();
    struct stat info;
    bool dirExists = (stat("docs", &info) == 0 && (info.st_mode & S_IFDIR) != 0);

    if(fileExists)
        std::cout << "File exists in current directory\n";
    else
        std::cout << "File does not exist in current directory\n";

    if(dirExists)
        std::cout << "Directory exists in current directory\n";
    else
        std::cout << "Directory does not exist in current directory\n";

    // Checking for input.txt and docs in root directory
    file.open("/input.txt");
    fileExists = file.good();
    dirExists = (stat("/docs", &info) == 0 && (info.st_mode & S_IFDIR) != 0);

    if(fileExists)
        std::cout << "File exists in root directory\n";
    else
        std::cout << "File does not exist in root directory\n";

    if(dirExists)
        std::cout << "Directory exists in root directory\n";
    else
        std::cout << "Directory does not exist in root directory\n";

    return 0;
}
```

Please note that:

1. The C++ standard library doesn't have a built-in function to check if a file or directory exists, so we use the `std::ifstream` and `stat` functions.
2. `std::ifstream::good()` returns `true` if the file was successfully opened for reading; otherwise it returns `false`.
3. The `stat` function fills an `info` structure with information about the path you pass to it, then we check whether this is a directory or not by checking `(info.st_mode & S_IFDIR) != 0`.

Remember that accessing `/` (the root directory in Unix-like systems) requires appropriate permissions; otherwise, your program might not be able to run.
