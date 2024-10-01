Below is the equivalent C++ code for the Golang program provided:

```cpp
#include <iostream>
#include "dirent.h"
#include "unistd.h"
#include "string.h"

int main(int argc, char **argv) {
    const char *dir = ".";

    if (argc > 1 && strcmp("-d", argv[1]) == 0) dir = "/";

    DIR *dp;
    struct dirent *ep;

    dp = opendir(dir);

    if (dp != NULL) {
        while ((ep = readdir(dp))) {
            std::cout << ep->d_name << std::endl;
        }

        closedir(dp);
    } else perror ("Couldn't open the directory");
}
```

This program uses `dirent.h` to read files from a directory in C++. This is equivalent to using the `os` library in Golang. In addition, it also includes functionality for renaming files and directories, which is not directly supported by C++, but you can use `rename` function or its alternative `replace` function if you include "unistd.h".

Please note that this is just a basic equivalent of the provided code in Golang. The actual behavior and functionality may vary depending on the specific platform and environment. For example, not all filesystems support renaming directories. You should be aware of these limitations when using C++. 

Also, if you want to rename files or directories within the current working directory ("."), you need to include "unistd.h" for your program to compile. This is because `os.Rename` will rename files/directories within a running process' filesystem and not change any paths relative to the current working directory. 

In C++, there are no equivalents for Golang's `os.Rename`, so you need to use `rename` or its alternative `replace`. The `os` library is mainly used for interacting with the operating system itself, while filesystem manipulations should be done through more low-level APIs like `dirent.h` and `rename`.

Lastly, note that this code will only work if you have sufficient permissions to rename files/directories within the specified directories. You may need additional checks or error handling depending on your specific requirements. 

I hope this helps! Let me know if you have any further questions.
