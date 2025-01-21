The error occurred because the `<filesystem>` library is not supported by the standard C++ library on all platforms, specifically on some older systems like macOS without enabling C++17 or later.

**Fix:** Use `<direct.h>` for directory creation and `std::ofstream` with a file stream directly in the root directory if possible.

```cpp
#include <iostream>
#include <fstream>
#include <cstdlib>

void fct(const char* path) {
    if (path == nullptr || *path == '\0') {
        std::cerr << "Invalid path" << std::endl;
        return;
    }
    
    FILE* file = fopen(path, "w");
    if (!file) {
        perror("Error opening file");
        return;
    }
    fclose(file);
}

int main() {
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    fct(strcat(cwd, "/output.txt"));
    fct("/output.txt");

    mkdir("docs", 0755);
    mkdir("/docs", 0755);

    return 0;
}
```
