Sure, here is how you can implement this in C++:

```c++
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void mkdirp(const std::string& path) {
    try {
        fs::create_directories(path);
    } catch (const std::exception &e) {
        // If directory already exists, no exception will be thrown.
        if(!fs::exists(path)) {
            throw;
        }
    }
}

int main() {
    mkdirp("./path/to/dir");
    return 0;
}
```

This code uses the C++17 standard library `std::filesystem` to create directories. The function `create_directories` creates a directory and its missing parents if they don't already exist. If the directory already exists, no error is thrown. In case of an exception (which might be due to permission issues), we check whether the directory actually exists at the end because creating an existing directory should not cause an exception in C++.
