Below is the C equivalent of your Java code:

```c
#include <stdio.h>
#include <stdlib.h>

int renameFile(const char *oldname, const char *newname) {
    if(rename(oldname, newname) == 0)
        return 1;
    else 
        return 0;
}

void test(const char *type, const char *oldname, const char *newname) {
    printf("The following %s called %s %s renamed as %s.\n", type, oldname,
        (renameFile(oldname, newname) ? "was" : "could not be"), newname);
}

int main() {
    test("file", "input.txt", "output.txt");
    test("file", "/input.txt", "/output.txt");
    test("directory", "docs/", "mydocs/");
    test("directory", "/docs/", "/mydocs/");

    return 0;
}
```
In this code:

1. We include the header `stdlib.h` for rename function and `stdio.h` for printf function.
2. The method `renameFile()` returns 1 if renaming is successful, and 0 otherwise.
3. In `test()`, we print whether the file/directory was renamed or not.
4. We call the `test()` function with appropriate arguments to test renaming in both the current directory and the root directory of the filesystem.

Please note that you must have adequate permissions to rename files or directories in certain locations (like the root directory).
