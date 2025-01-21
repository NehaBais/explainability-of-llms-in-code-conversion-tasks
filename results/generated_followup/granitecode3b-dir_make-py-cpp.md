Fix:
```cpp
#include 
#include 
#include 
namespace fs = std::filesystem;
void mkdirp(const std::string &path) {
  if (fs::exists(path)) {
    return;
  }
  fs::create_directories(path);
}
```
Explanation:
The error messages indicate that the compiler is unable to find certain header files. Specifically, it cannot find `<iostream>`, `<filesystem>`, or `<string>`. To fix this, you need to install the development libraries for these headers on your system. On Ubuntu and Debian-based systems, you can do this with the following command:

sudo apt-get install libboost-dev


