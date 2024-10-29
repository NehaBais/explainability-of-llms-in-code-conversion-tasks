In C++ you can use the `std::ofstream::open` method to create a new file and it will truncate any previous content. You don't need to manually close files in C++, they are closed automatically when they go out of scope (similar to how resources in Golang are cleaned up). For creating directories you can use the `mkdir()` function if on Unix-based systems or `CreateDirectoryW()` for Windows. Here is a simple way to implement this:

```C++
#include <iostream>
#include <fstream>
#include <direct.h>  // For _mkdir in windows

void createFile(std::string fn) 
{
    std::ofstream outfile (fn);
    if(!outfile) {
        std::cerr << "Error creating file: " <<  fn << "\n";
        return;
     }
    std::cout << "file "<< fn <<" created!\n";
}

void createDir(std::string dn) 
{
    if (_mkdir(dn.c_str()) == 0) {
        std::cout << "directory "<< dn <<" created!\n";
    } else {
        std::cerr << "Error creating directory: " <<  dn << "\n";
    }
}

int main() 
{
    createFile("output.txt");
    createDir("docs");
    
    // On Unix-based systems you might need to prefix the paths with "/" if it's in root directory, e.g:
    // createFile("/input.txt")
    // createDir("/docs")
}
```

Please note that `/` is not required when creating files or directories in C++, as they are relative to the current working directory by default (as with Golang). The root filesystem usually means system installation path and can't be directly addressed without more specific information. This code should work fine if you run it from your project directory on a Unix-based system. 

On Windows, you might need to use the WinAPI functions `CreateDirectoryW()` or similar for more advanced operations like handling long paths, permissions etc. It's also worth noting that creating directories in C++ is not necessarily as simple as it seems with Golang. Directory creation may require permissions and error checking depending on your system setup.

