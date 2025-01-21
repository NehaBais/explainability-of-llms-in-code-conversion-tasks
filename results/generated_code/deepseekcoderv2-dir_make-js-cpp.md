 To convert the given JavaScript code to C++, we can use libraries such as `boost::filesystem` for file system operations and `std::string` for string manipulation, since C++ does not have a built-in path library like JavaScript. Here is how you could implement the same functionality in C++:

```cpp
#include <iostream>
#include <filesystem>
#include <system_error> // For std::error_code

namespace fs = std::filesystem;

void mkdirp(const std::string& path, std::function<void(std::error_code)> cb) {
    cb = cb ? cb : [](std::error_code){};
    auto resolvedPath = fs::path(path);

    if (!fs::exists(resolvedPath)) {
        // The directory doesn't exist. Make its parent and try again.
        mkdirp(resolvedPath.parent_path().string(), [cb](std::error_code er) {
            if (er) cb(er);
            else mkdirp(resolvedPath.string(), cb);
        });
    } else if (cb) {
        cb({}); // Successfully reached the directory that exists or was created.
    }
}

int main() {
    std::string dirPath = "./path/to/dir";
    mkdirp(dirPath, [](std::error_code er) {
        if (er) {
            std::cerr << "Error: " << er.message() << '\n';
        } else {
            std::cout << "Directory created successfully.\n";
        }
    });
    return 0;
}
```

### Explanation:
1. **Namespace Alias**: We use `namespace fs = std::filesystem` to simplify filesystem operations.
2. **Function Definition**: The `mkdirp` function takes a path string and a callback function for handling errors or confirmations.
3. **Path Resolution**: `fs::path(path)` is used to resolve the input path, ensuring it's in the correct format.
4. **Existence Check**: If the directory does not exist (`!fs::exists(resolvedPath)`), we call `mkdirp` recursively on the parent directory.
5. **Callback Handling**: The callback function is invoked with an error code to signal success or failure.
6. **Main Function**: In the main function, we demonstrate how to use the `mkdirp` function and handle its output.

This C++ implementation mirrors the functionality of the provided JavaScript code, handling directory creation and parent directory traversal in a cross-platform manner.
