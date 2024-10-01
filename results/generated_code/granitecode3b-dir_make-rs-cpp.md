Here's the equivalent C++ code for creating a directory and any missing parents:
```c++
#include 
#include 

int main() {
 std::filesystem::create_directories("./path/to/dir");
 return 0;
}
```
Note that in C++, the `std::filesystem` library is used instead of `std::fs`. The code above creates a directory named "dir" in the "./path/to/" directory. If the directory already exists, it will be skipped. This code works equally well cross-platform and should produce the same result as the Rust code.

