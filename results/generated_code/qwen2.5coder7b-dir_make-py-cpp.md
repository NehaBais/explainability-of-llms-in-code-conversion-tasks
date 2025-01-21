In C++, you can use `std::filesystem` (which is a part of the Standard Library from C++17) to implement this functionality.

Here's an equivalent function in C++:

```cpp
#include <iostream>
#include <filesystem>

void mkdirp(const std::string &path)
{
    if (!std::filesystem::exists(path))
        std::filesystem::create_directories(path);
}

int main()
{
    mkdirp("./path/to/dir");
    return 0;
}
```

In this code, `mkdirp` is a function that takes a string `path` as its argument. It checks whether the path exists or not using `std::filesystem::exists`. If it doesn't exist, it creates all necessary parent directories and the directory itself using `std::filesystem::create_directories`.

Note: This code requires at least C++17 for std::filesystem to be available. For older versions of the standard, you may need to use Boost.Filesystem library instead.

Also, you have to include `<iostream>` for input/output operations and `<filesystem>` for filesystem related functionalities. You can use `std::filesystem` directly if your compiler supports it, otherwise use `boost::filesystem`. 

Please ensure that your environment is set up properly to compile C++17 code (or Boost.Filesystem).
