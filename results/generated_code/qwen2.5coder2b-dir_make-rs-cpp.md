The equivalent function in C++ is `mkdir` with the flags `mode_t 0777` for creating directories with permissions and `int flags = O_DIRECTORY | O_CREAT;`. 

Here is how you can write this function:

```cpp
#include <iostream>
#include <cerrno>

bool createDir(const std::string& path) {
    if (mkdir(path.c_str(), S_IRWXU | S_IXGRP | S_IROTH)) {
        if (errno != EEXIST) {
            std::cerr << "Error creating directory: " << strerror(errno) << '\n';
            return false;
        }
    } else {
        return true;
    }
}

int main() {
    std::string path = "./path/to/dir";
    if (!createDir(path)) {
        std::cout << "Failed to create directory." << std::endl;
    } else {
        std::cout << "Directory created successfully." << std::endl;
    }

    return 0;
}
```

This function checks the return value of `mkdir` to determine whether it was successful or if an error occurred. If the error is not `EEXIST`, it prints the error message and returns false, otherwise it returns true.

Please note that POSIX functions like `mkdir` are platform dependent and might require different flags depending on your operating system. This example assumes Linux-like systems.
