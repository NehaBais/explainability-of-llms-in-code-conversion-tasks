 C++ doesn't have built-in functions to create an empty file or directory like JavaScript does, but the functionality can be achieved through system calls. Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <cstdlib>  // For system() function

int main() {
    std::system("touch output.txt");
    std::system("touch /output.txt");
    
    std::system("mkdir docs");
    std::system("sudo mkdir /docs");

    return 0;
}
```
Please note that this code will only work if you have the necessary permissions to create these files or directories in the root directory. If you're running it from a standard user account, you might need to use `sudo` before each `mkdir` command.
