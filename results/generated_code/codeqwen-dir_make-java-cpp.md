In C++, you can use the `<filesystem>` library to create directories and their parents recursively. Here is the equivalent code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    try {
        std::filesystem::path p("C:/parent/test");
        if(std::filesystem::create_directories(p)) 
            std::cout << "Path successfully created" << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
```

This code creates a directory at the path `C:/parent/test` and its parents if they do not exist yet. If any error occurs, it is caught and an error message is printed to standard error. Note that this requires C++17 or later as `std::filesystem` was introduced in that version of the language.
