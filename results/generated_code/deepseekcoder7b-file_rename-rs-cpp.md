The C++ equivalent of the provided Rust code would look something like this:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    try {
        std::filesystem::rename("input.txt", "output.txt");
        std::filesystem::rename("docs", "mydocs");
        // To move to root directory, you will have to provide the full path of files 
        // (assuming that input.txt and docs are in the current working directory)
        // For example:
        // If your program is running from /home/user/project/, it'll be similar to this:
        std::filesystem::rename("/home/user/project/input.txt", "/home/user/project/output.txt");
        std::filesystem::rename("/home/user/project/docs", "/home/user/project/mydocs");
    } catch (const std::exception & e) {
        std::cerr << "File move error: " << e.what() << '\n';
    }

    return 0;
}
```
Please note that you need to compile this with C++17 enabled, as `std::filesystem` is a feature of the language added in C++17. You can enable it by passing `-std=c++17` flag while compiling your code. 

Also, please keep in mind that for these operations to be successful, you need to run this program with appropriate permissions as renaming/moving files usually requires admin privileges. Make sure to handle any potential exceptions and print error messages appropriately for debugging purposes.

