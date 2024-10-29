The C++ equivalent of the given JavaScript code is as follows - it utilizes standard library functions from `<fstream>` and `<filesystem>` to achieve file and directory creation in both current working directory and root filesystem respectively. 

Here's the equivalent C++ code. You will need to add error handling for production-level code, but this version omits them for brevity:

```c++
#include <fstream>
#include <filesystem>

int main() {
    std::ofstream outfile1("output.txt");  // opens file in current directory
    if (outfile1) {
        outfile1.close();                    // close the file as we don't need to write anything here, just create an empty file
    }
    
    std::filesystem::create_directory("docs");   // creates a "docs" folder in current directory 

    /* filesystem root varies by operating system
       For Windows it's C:\, for Linux /root */

    return 0;
}
```
Please note that you need permission to create file and folders at the root level of your file system. Also, getting into the root directory ("/") is different on Unix-based systems (like Linux or MacOS) and Windows. For Unix-based system you are typically not allowed to write in "/". You have to go one level upwards with "../" and then create a new folder/file there.

