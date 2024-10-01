Below is a C++ implementation using the Boost library which has equivalent functionalities for creating directories.

Here's how you would implement this in C++ with the Boost library:

```cpp
#include <boost/filesystem.hpp>
#include <iostream>

void mkdirp(const std::string& p) {
    try {
        if (!boost::filesystem::exists(p)) {
            boost::filesystem::create_directories(p);
        } 
    } catch (const boost::filesystem::filesystem_error &ex) {
        std::cout << ex.what() << std::endl;
    }
}
```

In this C++ version, `boost::filesystem::create_directories(p)` is equivalent to the JavaScript function call `fs.mkdir`. If parent directories do not exist they will be created as well. This behavior is also provided by Boost's `create_directories()`. 

The `exists()` function checks whether a file or directory exists at the specified path. If it doesn’t, we attempt to create it with `create_directories()`. Any filesystem errors that might occur are caught and their messages printed out.
