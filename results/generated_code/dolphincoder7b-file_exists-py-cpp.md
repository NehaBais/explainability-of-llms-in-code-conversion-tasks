The equivalent code in C++ is:
```cpp
#include <iostream>
#include <fstream>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
int main() {
    if (fs::exists("input.txt"))
        std::cout << "Found input.txt\n";
    else
        std::cout << "Not found.\n";

    if (fs::exists("/input.txt"))
        std::cout << "Found /input.txt\n";
    else
        std::cout << "Not found.\n";

    if (fs::is_directory("docs"))
        std::cout << "Found docs directory\n";
    else
        std::cout << "Not found.\n";

    if (fs::is_directory("/docs"))
        std::cout << "Found /docs directory\n";
    else
        std::cout << "Not found.\n";
}
```
The above program checks for the existence of an input file and a docs directory in the current working directory and also at the root of the file system. It uses `std::experimental::filesystem` namespace that is available starting from C++17 (GCC 8.0, Visual Studio 2019). If you need to use it with older compilers or libraries, you can include `<boost/filesystem.hpp>` and replace calls like `fs::exists("input.txt")` with `boost::filesystem::exists("input.txt")`.
Note that in C++17, the behavior of `std::experimental::filesystem::exists()` is different from how it was before (C++14) when it returned a boolean value indicating whether or not a file exists at the specified path. The return type has been changed to `bool` in C++17. This means you can use it like this:

if(fs::exists("input.txt")) {
    // ... do something if 'input.txt' exists ...
}
else {
    // ... do something else if 'input.txt' does not exist ...
}
