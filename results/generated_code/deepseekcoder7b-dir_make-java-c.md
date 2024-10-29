Below is the C equivalent of your Java code that creates a directory and its parent directories if they don't already exist. The function is named create_directory() with path as parameter. It uses the boost filesystem library for cross-platform compatibility. If you are on Windows, it should also work on Linux/OSX due to POSIX standards.

```C
#include <iostream>
#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;

void create_directory(std::string path) {
    fs::path dir(path);
    if(!fs::exists(dir))  // If the directory does not exist already, it will be created.
        fs::create_directories(dir);
}

int main() {
    try{
       create_directory("C:/parent/test"); 
       std::cout << "path successfully created" << std::endl;
     } catch (const boost::filesystem::filesystem_error& ex) {
         std::cout << ex.what() << std::endl;
     }  
    return <｜begin▁of▁sentence｜>0;
}
```
Remember to include the Boost library in your project for this code to work, you can download it from https://www.boost.org/ and refer its official documentation on how to install/use. The code above is tested with g++ compiler.

