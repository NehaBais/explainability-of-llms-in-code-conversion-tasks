The errors are due to the fact that `std::filesystem` library is not available until C++17 standard, which means that it cannot be used without compiler flag `-std=c++17` or higher. 

In addition, C++ does not have built-in support for file metadata like Rust, so we need to use the POSIX functions like `stat()` and `access()` from cstdlib library in a similar way as in the original Rust code:

```cpp
#include <cstdlib>
#include <iostream>
#include <sys/stat.h>

int main() {
  for (const char* file : {"input.txt", "docs", "/input.txt", "/docs"}) {
    struct stat buffer;
    if(stat(file, &buffer) == 0){
        if((buffer.st_mode & S_IFMT) == S_IFDIR){
            std::cout << file << " is a directory\n";
        }else{
            std::cout << file << " is a file\n";
        }
    } else {
      std::cout << file << " does not exist\n";
    }
  }
  return 0;
}
```
