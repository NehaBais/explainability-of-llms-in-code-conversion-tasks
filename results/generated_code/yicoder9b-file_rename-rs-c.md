The equivalent C code would be:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char * err = "File move error";

    if (rename("input.txt", "output.txt")) {
        fprintf(stderr, "%s: %s\n", err, strerror(errno));
        exit(EXIT_FAILURE);
    }
    
    if (rename("docs", "mydocs")) {
        fprintf(stderr, "%s: %s\n", err, strerror(errno));
        exit(EXIT_FAILURE);
    }

    if (rename("/input.txt", "/output.txt")) {
        fprintf(stderr, "%s: %s\n", err, strerror(errno));
        exit(EXIT_FAILURE);
    }

    if (rename("/docs", "/mydocs")) {
        fprintf(stderr, "%s: %s\n", err, strerror(errno));
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS; 
}
```
This C program uses the standard library function `rename()` to accomplish the renaming. If there is an error during the rename operation, it prints a message and terminates with a failure status.
