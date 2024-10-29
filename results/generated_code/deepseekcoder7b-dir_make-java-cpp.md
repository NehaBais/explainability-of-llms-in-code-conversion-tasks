In C++, you can use the `boost::filesystem` library to achieve this functionality. Here is your Java code translated into a C++ function using `mkdir()` and `mkpath()` functions of boost filesystem:

C++ Code :

```cpp
#include <iostream>
#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;

void create_directory(const std::string& path) 
{
    fs::path dir(path);
    
    if(!fs::exists(dir))
    {
        if(fs::create_directories(dir))
            std::cout << "Path successfully created" << std::endl;
    } 
}

int main() {
    create_directory("C:/parent/test");
     return 0;
}
```
Please note that for using boost::filesystem, make sure to include it in your project and link against it. Additionally, the library might require administrator privileges to be able to create directories at arbitrary locations. For cross-platform compatibility, you can use CMake or other build systems to handle this for you. 

Also note that, unlike Java’s File class, Boost Filesystem does not support URIs directly. If using boost::filesystem in a project with C++17 filesystem support (available starting from gcc-8), the code can be simplified:

#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

void create_directory(const std::string& path) 
{
    fs::path dir(path);
    
    if(!fs::exists(dir))
    {
        if(fs::create_directories(dir))
            std::cout << "Path successfully created" << std::endl;
    } 
}

You can call the `create_directory()` in your main function as above. Please ensure to include C++17 filesystem library with compiler flag -std=c++17 or later if you are using CMake, add this line: `set(CMAKE_CXX_STANDARD 17)`

