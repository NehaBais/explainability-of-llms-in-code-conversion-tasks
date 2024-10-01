To convert the Python code to C, we can use the same approach used in Python. Here is the equivalent code in C:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat st;
    stat("input.txt", &st);
    printf("%ld\n", (long) st.st_size);

    stat("/input.txt", &st);
    printf("%ld\n", (long) st.st_size);
    
    return 0;
}
```

Explanation:

1. We include the necessary headers for file operations and getting file information in C (`stdio.h` for printing, `sys/stat.h` for file information).
2. We define a `struct stat` to hold file information.
3. We call the `stat()` function to retrieve the size of `input.txt`. The result is stored in the `st` struct.
4. We print the result using `printf()`.
5. We repeat the process for `/input.txt`, which should give a different result because it's the root directory, and will always be 1 byte long.
6. Finally, we return 0 to indicate successful execution of the program.
