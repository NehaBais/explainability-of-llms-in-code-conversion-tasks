```c
#include <stdio.h>
#include <filesystem>

int main() {
    const char* files[] = {"input.txt", "docs", "/input.txt", "/docs"};

    for (const char* file : files) {
        std::filesystem::path path(file);

        if (std::filesystem::exists(path)) {
            if (std::filesystem::is_directory(path)) {
                printf("%s is a directory\n", file);
            } else {
                printf("%s is a file\n", file);
            }
        } else {
            printf("%s does not exist\n", file);
        }
    }

    return 0;
}
```
