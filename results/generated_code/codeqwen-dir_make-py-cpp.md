The equivalent function in C++ would be:

```c++
#include <filesystem>

namespace fs = std::experimental::filesystem;

void mkdirp(const std::string& path) {
    fs::create_directories(path);
}
```

You can use this function to create a directory and any missing parents. Please note that `std::experimental::filesystem` is an experimental feature in C++17, so you'll need to compile your code with `-std=c++1z` or higher. If you don't have access to C++17 or later, you can use the boost library which has a similar `create_directories` function:

#include <boost/filesystem.hpp>

void mkdirp(const std::string& path) {
    boost::filesystem::create_directory_recursive(path);
}
