The equivalent C++ code for the given Python script would look something like this:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {

    // rename file in current directory 
    fs::rename("input.txt", "output.txt");

    // rename directory 
    fs::rename("docs", "mydocs");


    // renaming file path in filesystem root
    std::string newPath = fs::path("/root/") / "input.txt";
    fs::rename(newPath, "/root/output.txt");

    // renaming directory under root 
    newPath = "/root/" + "docs";
    fs::rename(newPath, "/root/mydocs");


    return 0;
}
```
Remember to include `#include <filesystem>` in your C++ code which provides the filesystem library for the filesystem operations.
Please note that the above example uses C++17 features. If you are using an older version of C++, some modifications may be required based on the available libraries in your development environment.
