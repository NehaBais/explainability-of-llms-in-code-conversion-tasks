Below is a C++ code using the standard filesystem library (C++17 onwards):

```cpp
#include <filesystem>
#include <system_error>  // std::error_code

namespace fs = std::filesystem;

void mkdir_p(const fs::path& p) {
    std::error_code ec; 
    fs::create_directories(p, ec); // create all directories in the path

    if (ec)
        throw std::system_error(ec, "creating directories: " + p.string());  // throw an exception if any error occurs
}
```

Note that this code requires C++17 or a later standard version to work properly due to the usage of the `std::filesystem` library. 

This function will attempt to create all directories in provided path, creating any missing parents on the way. If directory already exists it will simply continue with the next directory till the full path is created. If there's an error (for example permission denied) it will throw a `std::system_error` exception with detailed information about what went wrong.

Also note that if the directory already exists and has the correct permissions, this function won't do anything and won't return any errors. This is in line with how `mkdir -p` works.
