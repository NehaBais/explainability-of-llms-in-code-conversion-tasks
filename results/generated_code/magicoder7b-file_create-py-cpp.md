 Below is the equivalent C++ code for your Python script:

In C++, you can use `fstream` to create an empty file and `boost/filesystem.hpp` to create a directory. However, C++ does not have native support for relative paths like Python does, so it's essential to know the absolute path of the root directory if you want to reproduce your task exactly.

```cpp
#include <fstream>
#include <boost/filesystem.hpp>
using namespace boost::filesystem;

void create(const char* directory) {
    std::ofstream file(path(directory) / "output.txt");
    path p = directory;
    while (!p.empty()) {
        if (create_directory(p / "docs")) return; // success
        p = p.parent_path(); // try next level up 
    }
}

int main() {
    create(".");
    create("/");
    
    return 0;
}
```

Note that the boost library is not included in standard C++ so you have to install it first if you don't have it. Also, please note that file creation and directory creation are separate operations which may fail independently. In this code, we try creating a "docs" directory in each path from root upwards until we succeed or run out of paths (which signifies the filesystem root). This approach is more robust than trying to create both at once due to potential permission issues and such.
