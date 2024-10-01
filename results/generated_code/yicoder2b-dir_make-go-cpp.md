The equivalent C++ code would be:

```cpp
#include <sys/stat.h>
#include <unistd.h>
#include <string>

bool createDir(const std::string& path, mode_t mode = 0770) {
    struct stat st;
    if (stat(path.c_str(), &st) == 0 && S_ISDIR(st.st_mode)) {
        return true;
    }
    char *dir = strdup(path.c_str());
    char *token;
    do {
        token = strtok(dir, "/");
        if (!token) break;
        struct stat stbuf;
        memset(&stbuf, 0, sizeof stbuf);
        stat(dir, &stbuf);
        // if this directory doesn't exist, attempt to make it
        if (S_ISDIR(stbuf.st_mode) == false) {
            int res = mkdir(dir, mode);
            if (res != 0) {
                return false;
            }
        }
    } while (1);
    free(dir);
    return true;
}
```
This C++ code does the following:
- It first checks if the directory already exists. If it does, it simply returns true.
- If the directory doesn't exist, it creates all necessary parent directories.
Please note that this function assumes that the current working directory is set correctly when you call it and also that the directory names are properly escaped with appropriate backslashes in case they contain spaces or special characters.
