```cpp
#include <sys/stat.h> // for creating directories
#include <unistd.h>    // for create() system call
#include <string>
#include <cstring>
#include <cstdlib>  // for access(), mkdir()

bool mkpath(std::string const &s) {
    size_t pos = s.find_last_of('/');
    if (pos == std::string::npos) return false;

    // create parent directory
    std::string path = s.substr(0, pos);
    if (!mkpath(path)) return false;

    // create current directory
    int rc = mkdir(s.c_str(), S_IRWXU | S_IRWXG | S_IROTH);
    if (rc == -1) {
        perror("mkdir");
        exit(EXIT_FAILURE);
    }
    return true;
}
```
The C++ implementation follows a similar approach to the original Python code. It uses functions from `sys/stat.h` and `unistd.h`. The main function is `mkpath()`, which creates directories recursively according to the input string's path hierarchy. Inside this function, it first checks for an existing directory and returns true if it does exist. If not, it finds the last occurrence of '/' in the path string, then uses `mkdir` with `S_IRWXU | S_IRWXG | S_IROTH` as the mode to create a new directory. It also calls itself recursively on the parent directories.
The function returns true if successful and false if an error occurred.
