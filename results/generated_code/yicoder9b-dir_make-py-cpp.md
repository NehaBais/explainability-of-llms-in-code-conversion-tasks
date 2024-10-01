In C++ you can use the `filesystem` library (available starting from C++17) to implement a similar functionality: 

Here is how your function might look like in C++.

```cpp
#include <filesystem>

void mkdirp(std::string const& path) {
    if (!std::filesystem::exists(path)) {
        std::filesystem::create_directories(path);
    }
}
```
This function will create the directory indicated by `path` and any parent directories that do not already exist. If the directory does already exist, it will simply return without doing anything.
  
However, for C++ versions before 17, you can use the standard library `<dirent>` functions with `boost::filesystem`:

#include <boost/filesystem.hpp>

void mkdirp(std::string const& path) {
    if (!boost::filesystem::exists(path)) {
        boost::filesystem::create_directories(path);
    }
}

Here `boost::filesystem` is used to check if the directory exists or not and create it if necessary. You will also need to link against boost at compile time for this code to work. 

Please note, `<dirent>` and `boost/filesystem` are part of Boost Library which is not a standard library in C++, so using them might make your software non-portable if you don't want to include the entire Boost Library.
