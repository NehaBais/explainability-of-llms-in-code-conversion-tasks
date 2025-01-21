To convert the given C code to C++, you need to replace the use of `rename` function which is not available in C++. You can achieve this by using Boost Filesystem library, which provides similar functionality. Here's how you can do it:

```cpp
#include <iostream>
#include <boost/filesystem.hpp>

int main() {
    // Create a filesystem object
    boost::filesystem::path current_dir = boost::filesystem::current_path();
    boost::filesystem::path root_dir = boost::filesystem::system_complete(boost::filesystem::path("/"));

    // Rename files and directories in the current directory
    boost::filesystem::rename(current_dir / "input.txt", current_dir / "output.txt");
    boost::filesystem::rename(current_dir / "docs", current_dir / "mydocs");

    // Rename files and directories in the root directory
    boost::filesystem::rename(root_dir / "input.txt", root_dir / "output.txt");
    boost::filesystem::rename(root_dir / "docs", root_dir / "mydocs");

    return 0;
}
```

Make sure to link your C++ program with Boost Filesystem library. You can do this by adding the following linker flag when compiling your program:

g++ -o rename_files rename_files.cpp -lboost_filesystem

This will compile and run the program, renaming files and directories as specified in the requirement.
