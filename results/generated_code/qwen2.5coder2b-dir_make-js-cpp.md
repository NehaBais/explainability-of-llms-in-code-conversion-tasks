The equivalent code in C++ would look like this:

```cpp
#include <iostream>
#include <string>
#include <filesystem>

void mkdirp(const std::string &path, const std::function<void(std::error_code)> &cb) {
    if (std::filesystem::exists(path)) return cb({});
    try {
        std::filesystem::create_directories(path);
        cb({});
    } catch (const std::exception& e) {
        cb(e.code());
    }
}
```
In this code, `mkdirp` takes two arguments: the path to the directory that needs to be created and a callback function. The function checks if the directory already exists using `std::filesystem::exists`. If it doesn't exist, it attempts to create the directory using `std::filesystem::create_directories`. If any errors occur during this process, it uses the callback function to report the error.

Note that std::filesystem module has been added in C++17.
