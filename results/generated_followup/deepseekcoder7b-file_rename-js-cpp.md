The error message `'experimental/filesystem' file not found` indicates that the compiler cannot find the system header files for filesystem, which are needed to use functionalities of C++17 filesystem. 

This can be fixed by adding the path of the filesystem library in include directives and specifying it while compiling the code. For example, if your gcc version is 8.0 or above and you installed filesystem using `sudo apt-get install libstdc++6`, then you need to provide this location at compile time with -I option.

This assumes that the include directory for C++ filesystem library is /usr/include/cppcon and /usr/local/include are also its required directories, these can vary based on how it is installed in your system so please replace them with correct paths if they do not exist. 

Also note that -std=c++17 flag signifies to compile the program using C++17 standard.

Once you fix the include path issue, then the corrected code block will be:

```cpp
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

int main() {
  fs::rename("input.txt", "output.txt");
  fs::rename("/input.txt", "/output.txt");
  fs::rename("docs", "mydocs");
  fs::rename("/docs", "/mydocs");
  
  return 0;
}
```

