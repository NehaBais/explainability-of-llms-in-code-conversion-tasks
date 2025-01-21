The C programming language does not have built-in support for file and directory manipulation like JavaScript's ActiveXObject. However, you can use the Standard Library of C to achieve these operations.

Here is a possible solution:

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    char currentPath[] = "./";
    char rootPath[] = "/";

    rename("input.txt", "output.txt");
    rename(currentPath, output.txt");

    rename("c:/input.txt", "c:/output.txt");
    rename(rootPath, output.txt");

    rename("docs", "mydocs");
    rename(currentPath, mydocs");

    rename("c:/docs", "c:/mydocs");
    rename(rootPath, mydocs");

    return 0;
}
```

However, there are a few issues with this code:

1. The C Standard Library's `rename` function only works on single files and doesn't support directories.
2. `./` is the path for current directory in Unix systems but not in Windows (where it would be `.`).
3. In C, string literal cannot directly contain a colon (`:`) as it has special significance.

To address these issues, you could create a platform-specific solution using system calls on UNIX-like systems or the Windows API on Windows:

#include <stdio.h>
#include <stdlib.h>

int main() {
    char currentPath[] = "./";
    char rootPath[] = "/";

#ifdef _WIN32

    // Windows specific code
    system("ren input.txt output.txt");
    system("ren docs mydocs");

    system("ren c:\\input.txt c:\\output.txt");
    system("ren c:\\docs c:\\mydocs");

#else 

    // UNIX like systems (Linux, macOS)
    rename("input.txt", "output.txt");
    rename(currentPath, output.txt);

    rename("c:/input.txt", "c:/output.txt");
    rename(rootPath, output.txt);

    rename("docs", "mydocs");
    rename(currentPath, mydocs");

    rename("c:/docs", "c:/mydocs");
    rename(rootPath, mydocs");

#endif

    return 0;
}

This code uses the `rename` function on UNIX-like systems and the `system("ren")` function for Windows to perform the file renaming.

Remember that running commands in C with `system()` is a security risk if you're not careful. If you're dealing with user-provided input, always sanitize it to avoid directory traversal attacks.
