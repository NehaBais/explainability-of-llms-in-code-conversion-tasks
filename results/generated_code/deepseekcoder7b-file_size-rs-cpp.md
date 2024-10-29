The equivalent C++ code would be as follows. It uses `<iostream>` for standard input/output operations, `<unistd.h>` and `<sys/stat.h>` for file size check and error handling respectively. 

Note that the root filesystem location varies depending on the operating system, so it's not directly possible to refer to "/" (which is a common approach in many systems) without providing platform-specific code. This example assumes you have direct access to the path where your "input.txt" file resides:
```cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sys/stat.h>

void exit_err(const std::string& msg, int code) {
    std::cerr << "Error: " << msg << std::endl; 
    exit(code);
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        exit_err("No file name supplied", 1);  
    }

    struct stat buf;
    std::string filename = argv[1];
    
    // check if the file exists and get its size
    if(stat(filename.c_str(), &buf) == -1){
        exit_err("Cannot access " + filename, 2);  
    }

    std::cout << "Size of "<< filename <<" is " << buf.st_size << " bytes" << std::endl;
}
```

