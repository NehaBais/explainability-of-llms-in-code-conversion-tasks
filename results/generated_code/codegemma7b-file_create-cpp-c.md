```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    FILE *f = fopen("output.txt", "w");
    fclose(f);
    f = fopen("/output.txt", "w");
    fclose(f);

    mkdir("docs", 0755);
    mkdir("/docs", 0755);

    return 0;
}
```

**Explanation:**

* The C code uses the `fopen()` function to create the "output.txt" files in both the current working directory and the filesystem root.
* The `mkdir()` function is used to create the "docs" directories in both locations.
* The permissions for the directories are set to 0755, which grant read, write, and execute permissions to the owner and read permissions to others.
