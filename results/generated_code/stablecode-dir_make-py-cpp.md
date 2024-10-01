Below is your Python code converted to C++:

This implementation makes use of the Boost library which provides file system related functionality. Note that error handling in this version is done using exceptions.

C++ Code:
```cpp
#include <boost/filesystem.hpp> 
#include <iostream>

void mkdirp(const std::string& path) { 
    try { 
        // Create directory structure if it doesn't exist already.
        boost::filesystem::create_directories(boost::filesystem::path(path))));

        std::cout << "Directory created successfully!" << std::endl;
    } catch (const boost::filesystem::filesystem_error& e) { 
        // Error handling, print out the error message.
        std::cerr << "Error: " << e.what() << std::endl; 
    } 
}
```

Note: Make sure to link against Boost and any other necessary libraries depending on your compiler/build system configuration.
