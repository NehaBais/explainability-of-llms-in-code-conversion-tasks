In C++, we can use the `std::filesystem` library introduced in C++17 to perform file system operations like renaming directories or files.

Below is your converted code:

```cpp
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    // Rename input.txt into output.txt in the current working directory 
    fs::rename("input.txt", "output.txt");

    // Rename docs into mydocs in the filesystem root
    fs::path root("/");
    fs::rename(root / "docs", root / "mydocs");

    return 0;
}
```

This code will work on directories and files that exist within your working directory. The root of the filesystem is accessed by creating a `std::filesystem::path` with the root path ("/"))).

Remember, if there are any non-empty subdirectories under "docs", they need to be moved first before "mydocs" can be created.
