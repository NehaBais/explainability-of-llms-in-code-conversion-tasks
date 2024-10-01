Below is the equivalent C++ code using the standard library. Note that exception handling and directory creation are different in C++, so this implementation may need some tweaking based on the specifics of your environment.

```cpp
#include <iostream>
#include <filesystem>

void mkdirp(const std::string& p) {
    try {
        // Attempt to create the directory
        std::filesystem::create_directories(p);
    } catch (const std::filesystem::filesystem_error& e) {
        if (e.code() == std::make_error_code(std::errc::no_such_file_or_directory)) {
            // Directory doesn't exist. Make its parent and try again.
            auto pos = p.find_last_of('/'); 
            if (pos != std::string::npos) {
                mkdirp(p.substr(0, pos));
                mkdirp(p);
            } else {
                throw;  // Throw the exception upwards
            }
        } else {
            throw;
        }
    }
}

int main() {
    try {
        mkdirp("/path/to/dir");
        std::cout << "Directory created successfully.\n";
    } catch (const std::exception& e) {
        std::cerr << "Error creating directory: " << e.what() << "\n";
    }

    return 0;
}
```

### Explanation:

1. **Include Directories**: `#include <iostream>` for console I/O, and `<filesystem>` to handle file system operations.
2. **Function Declaration**:
   - `mkdirp` takes a single parameter `p`, which is the path string of the directory to be created.
3. **Attempt Directory Creation**:
   - `std::filesystem::create_directories(p)` tries to create all directories along the path.
4. **Error Handling**:
   - If the error code indicates that the parent directory does not exist (`no_such_file_or_directory`), it recursively creates the parent directory and then attempts to create the original directory again.
   - If another type of error occurs, it throws an exception upwards to be caught by the caller.

5. **Main Function**:
   - Demonstrates how to call `mkdirp`.

### Note:

- The code assumes that the path is provided in a form that can be directly used with `std::filesystem::create_directories`. This might need adjustments based on your specific environment.
- Exception handling is used here because C++ does not have a direct equivalent of JavaScript's callback mechanism for asynchronous operations.

This solution should work across different platforms with minimal modifications, similar to the behavior of POSIX mkdir -p command.
