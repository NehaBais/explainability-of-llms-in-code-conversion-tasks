Converting this C++ code to C involves replacing the libraries used (<filesystem> and <iostream>) with their counterparts in the C standard library (<stdio.h>, <stdlib.h>, and <string.h>)). The function itself is also replaced by a simple function, since file handling and streams are not available in plain C.

Here's how you would translate it into C:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_file_size(const char* filename) 
{
    FILE * file = fopen(filename, "rb");

    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    fclose(file);

    printf("Size of file '%s' is %ld bytes.\n", filename, size);
}

int main() 
{
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
Please note that the code above will only work properly on systems where file paths are implemented as `char *` (i.e., ASCII strings). If you're working with a Unicode or other character encoding, you'll need to use `wchar_t *` instead and manipulate wide characters using functions like `fgetwc()` and `fputwc()`. This level of complexity is not necessary for simply printing out the size of a file.
