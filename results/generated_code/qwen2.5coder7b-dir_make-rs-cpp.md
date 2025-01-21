In C++, you can use `std::filesystem` (which is a part of the Standard Library from C++17) to accomplish this. Here's how:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    try {
        std::filesystem::create_directories("./path/to/dir");
    } catch(const std::exception& e) {
        std::cerr << "An Error Occured: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
```

Note that `std::filesystem::create_directories` does not throw an exception if the directory already exists, so there's no need to check for existence before creating.

Also remember that you should include the `<filesystem>` header and link against the filesystem library when compiling your program. This might look something like:

g++ -std=c++17 -lstdc++fs myprogram.cpp -o myprogram

Note that on older versions of GCC (prior to 8.0), you may need to use `-lc++fs` instead.
