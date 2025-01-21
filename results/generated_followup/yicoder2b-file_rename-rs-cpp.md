The error is caused by the fact that `errno` was not correctly declared as it is used before its definition, which can occur at compile-time or runtime errors depending on whether `errno` exists in your environment at the time of compilation/execution. In this case, `strerror(errno)` is called before `errno` has been properly initialized, which will likely cause a linker error as `errno` doesn't exist in the global namespace.

The fix would be to initialize `errno` in your code before using it:

```cpp
#include <cstdio>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
  
int errno;

void rename_files(const char *old_name, const char *new_name) {
    if (rename(old_name, new_name) == 0){
        printf("File renamed successfully\n");
    } else {
        fprintf(stderr, "Failed to rename file: %s\n", strerror(errno));
    }
}

int main() {
    rename_files("input.txt", "output.txt");
    struct stat st;
    if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)){
        rename_files("docs", "mydocs");
    }
    return 0;
}
```
