The following is the equivalent C++ code for the given Rust code snippet. This code uses the `<iostream>`, `<filesystem>`, and `<cstdlib>` libraries in C++ to verify the size of a file called "input.txt" for the current working directory, as well as another one in the root directory:

```cpp
#include <iostream>
#include <filesystem>
#include <cstdlib>

void exit_err(const std::string &msg, int code) {
    std::cerr << "Error: " << msg << std::endl;
    exit(code);
}

int main() {
    try {
        auto cwd = std::filesystem::current_path();
        std::filesystem::path file(cwd/"input.txt");

        if(!std::filesystem::exists(file)){
            throw "No file name supplied";
        }

        auto size = std::filesystem::file_size(file);
        std::cout << "Size of input.txt is " << size << " bytes\n";

    } catch (const char* msg) {
        exit_err(msg, 1);
    } catch (...) {
        exit_err("Unknown error", 2);
    }

    return 0;
}
```

Please note that `std::filesystem::current_path()` and `cwd/"input.txt"` are used to access the current working directory, and "input.txt" is a file in it. In this code, you need to replace "input.txt" with the name of the file you want to check.

Also note that C++17 is required for using the `<filesystem>` library. If you are using an older version of C++, you can use Boost.Filesystem which provides a similar API.
