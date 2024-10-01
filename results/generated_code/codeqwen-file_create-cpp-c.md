C does not have a built-in filesystem library, but we can use the system() function to execute system commands. Here is your code translated into C:

```c
#include <stdlib.h>

int main() {
    system("touch output.txt && mkdir docs");
    system("/bin/mkdir -p /docs");  // Make directory recursively, creating parents as needed

    system("cd .. && touch output.txt && mkdir docs");
    system("/bin/mkdir -p /output.txt && mkdir -p /docs");  // Create in parent directory

    return 0;
}
```

This will create "output.txt" and "docs" directories in the current working directory, and it will also create those same directories at the root level ("/") using absolute paths. Note that the C++ code makes sure to close the file stream before trying to reopen it in different directories; but this is not necessary when using system() function as we are creating files and directories from outside of the program.
