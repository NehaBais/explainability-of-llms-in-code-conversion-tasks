In C++ you would use the `boost` library to get file attributes and perform error checking. Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;

void printStat(const char* path) {
    struct stat buffer;
    if (stat(path, &buffer)!=0){
        std::cout << "Cannot access: " <<  path << std::endl;
    } 
    else if(S_ISDIR(buffer.st_mode)) {
       std::cout << path << " is a directory" << std::endl;
    } 
    else {
        std::cout << path << " is a file" << std::endl;
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
    return 0;
}
```
This code checks the current working directory and root of the filesystem for files named "input.txt" and directories named "docs". The function `printStat` uses the Unix-specific system call `stat()` to get details about a file or directory given its path, then uses macros from `sys/stat.h` (like S_ISDIR) to check if it's a directory.

To compile this code you need `boost` library and run with the following commands: 

g++ -std=c++14 -I /usr/include/boost yourfilename.cpp -o outname
./outname

Note that you should replace "/usr/include/boost" with path where boost's headers are located on your system, "yourfilename.cpp", and "outname" accordingly. If Boost is not installed in a standard location or the version is different, this command might need to be adjusted. 

This will only work if you have permissions to access these directories/files. 

Note: The `boost::filesystem` does not exist on all platforms and configurations by default. If it's missing, you may need to download and install Boost C++ Libraries along with their documentation. Make sure to include the header files while compiling (for example, `-I /usr/include/boost`).

