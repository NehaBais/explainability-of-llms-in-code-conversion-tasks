Below is the equivalent C++ code for renaming files and directories. The code uses the C Standard Library `rename()` function which directly corresponds to Python's `os.rename()` method.

```cpp
#include <cstdlib>  // For rename()

int main() {
    // Rename in current working directory
    if(rename("input.txt", "output.txt") == 0) {
        printf("File renamed successfully!\n");
    } else {
        printf("Unable to rename the file!\n");
    }

    // Rename a directory in current working directory
    if(rename("docs", "mydocs") == 0) {
        printf("Directory renamed successfully!\n");
    } else {
        printf("Unable to rename the directory!\n");
    }

    // Rename a file in filesystem root
    if(rename("/input.txt", "/output.txt") == 0) {
        printf("File renamed successfully in filesystem root!\n");
    } else {
        printf("Unable to rename the file in filesystem root!\n");
    }

    // Rename a directory in filesystem root
    if(rename("/docs", "/mydocs") == 0) {
        printf("Directory renamed successfully in filesystem root!\n");
    } else {
        printf("Unable to rename the directory in filesystem root!\n");
    }
  return 0;
}
```
Note that you need to have the appropriate permissions for renaming files and directories. If the user doesn't have these rights, the `rename()` function will fail silently.
