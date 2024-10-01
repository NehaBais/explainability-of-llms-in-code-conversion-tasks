The given JavaScript code creates a directory and its parent directories recursively in a way similar to the `mkdir -p` command available in POSIX systems. Here is how you can achieve the same functionality in C++:

```cpp
#include <iostream>
#include <filesystem>

void mkdirp(const std::string& p) {
    try {
        std::filesystem::create_directories(p);
    } catch (std::exception& e) {
        std::cerr << "Error creating directory: " << p << "\n" << e.what() << '\n';
    }
}

int main() {
    mkdirp("./path/to/dir");
    return 0;
}
```

In the C++ code, we're using `std::filesystem::create_directories()` which creates all the parent directories recursively and then creates the directory at the end. If any errors occur during this process, they will be caught in a try-catch block and an error message will be printed to the standard error output.
