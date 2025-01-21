The error message indicates that the symbol "main", which is the entry point for any C program, was not found when linking the final executable file. 

To fix this issue, you need to define a main function in your C code:

```c
#include <stdio.h>

int main(void) {
    if (mkdirp("/path/to/directory")) {  // replace "/path/to/directory" with the directory you want to create
        printf("Failed to create directories\n");
        return 1;
    } else {
        printf("Directories created successfully\n");
        return 0;
    }
}
```

Now, you have a complete C program with an entry point and your function "mkdirp()".
