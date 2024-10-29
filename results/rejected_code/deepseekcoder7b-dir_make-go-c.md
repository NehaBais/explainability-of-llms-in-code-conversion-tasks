The following is a C implementation of your Go code using the boost library as it provides an easy way to create directories recursively. Please remember that Boost must be installed and properly linked in order for this solution to work. The function `create_directories` will handle creating missing parent directories when you pass in the path string.

```c++
#include <boost/filesystem.hpp>

void create_directory(std::string path) {
    boost::filesystem::path dir(path);
    
    if (!exists(dir)) // If directory does not exist
        boost::filesystem::create_directories(dir); 
}
```
Remember to wrap your main function with a try-catch block for error handling, as mentioned in the comments. Also, always check return values from functions that may fail and handle those failures accordingly. Here's how you might handle some common failure cases:

```c++
#include <iostream>
#include <boost/filesystem.hpp>

void create_directory(std::string path) {
    boost::filesystem::path dir(path);
    
    if (!exists(dir))  // If directory does not exist
    {
        try
        {
            if(!boost::filesystem::create_directories(dir))
                throw std::runtime_error("Cannot create " + path);
        }
        catch (const boost::filesystem::filesystem_error& ex)
        {
            std::cerr << ex.what() << std::endl;
        }
        catch (const std::exception& ex) 
        {
            std::cerr << "Exception: " << ex.what() << std::endl;
        }
    }
}
```

