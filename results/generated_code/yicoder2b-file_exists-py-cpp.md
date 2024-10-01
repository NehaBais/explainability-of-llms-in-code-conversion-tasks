Sure, the equivalent C++ code would be:

```cpp
#include <cstdio>
#include <cstring>

int main() {
    const char* filename = "input.txt";

    if (stricmp(filename, "input.txt") == 0 && access(filename, R_OK | F_OK) == 0) {
        printf("File exists and is readable in current directory\n");
    } else {
        printf("File does not exist or is not readable in current directory\n");
    }

    const char* dirname = "/docs";

    if (stricmp(dirname, "/docs") == 0 && access(dirname, R_OK | F_OK) == 0) {
        printf("Directory exists and is readable in root\n");
    } else {
        printf("Directory does not exist or is not readable in root\n");
    }

    return 0;
}
```