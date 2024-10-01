Certainly! Here is the equivalent C++ code implementing the same functionality as provided C code:

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <sys/stat.h>
#include <unistd.h>

int createDirectories(const std::string& path) {
    // Split the string by '/'
    std::vector<std::string> directories;
    std::istringstream ss(path);
    std::string token;
    while (std::getline(ss, token, '/')) {
        if (!token.empty()) {  // ignore empty tokens
            directories.push_back(token);
        }
    }

    // Create the path by appending each directory to the previous one
    std::string currentPath = "/";
    for (const auto& dir : directories) {
        currentPath += dir + "/";

        struct stat info;
        if (stat(currentPath.c_str(), &info) != 0 || !S_ISDIR(info.st_mode)) {
            // Directory doesn't exist or isn't a directory, so create it
            if (mkdir(currentPath.c_str(), 0755) < 0) {
                std::cerr << "Couldn't create directory: " << currentPath << '\n';
                return -1;
            }
        } else {
            // Directory already exists and is a directory
            continue;
        }
    }

    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <path>\n";
        return 1;
    }

    std::string path(argv[1]);
    int result = createDirectories(path);
    
    return result;
}
```

### Explanation:

1. **Includes**: 
   - `iostream` for input/output operations.
   - `vector`, `string`, and `sstream` for string manipulation and splitting the path into directories.
   - `sys/stat.h` and `unistd.h` for filesystem operations.

2. **createDirectories Function**:
   - The function takes a single path as a string and attempts to create all missing parent directories.
   - It splits the path by `/`, iterates over each directory, and constructs the full path up to that point.
   - It uses `stat` to check if the directory exists and is a valid directory. If not, it creates the directory using `mkdir`.

3. **main Function**:
   - Checks for proper command-line arguments.
   - Calls `createDirectories` with the provided path.

This code should work across platforms where C++11 or later is supported, as well as Unix-like systems (Linux, macOS, etc.). It uses similar principles to the original C code but is wrapped in a more modern and idiomatic C++ context.
