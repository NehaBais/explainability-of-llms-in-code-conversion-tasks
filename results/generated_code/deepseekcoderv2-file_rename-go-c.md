 Here's the equivalent code in C that performs the same operations as your Golang code:

```c
#include <stdio.h>
#include <stdlib.h>

void rename_file(const char *oldname, const char *newname) {
    if (rename(oldname, newname) != 0) {
        perror("Error renaming file");
        exit(EXIT_FAILURE);
    }
}

int main() {
    rename_file("input.txt", "output.txt");
    rename_file("docs", "mydocs");
    rename_file("/input.txt", "/output.txt");
    rename_file("/docs", "/mydocs");
    return 0;
}
```

In this C code:
- The `rename_file` function is defined to handle the renaming of files and directories. It takes two arguments, `oldname` and `newname`, which are the old and new names respectively.
- The `rename` system call is used to rename the files and directories as specified.
- If the `rename` call fails (indicated by `rename` returning a value other than 0), an error message is printed using `perror`, and the program exits with a failure status.
