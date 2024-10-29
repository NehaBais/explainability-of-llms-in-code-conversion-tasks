The C++ standard library doesn't provide direct functions to achieve the required tasks, but we can use `experimental/filesystem` in c++17 onwards. Here is how you could write it:

```cpp
#include <iostream>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

int main() {
    for (auto& p : std::vector<std::string>{"input.txt", "docs", "/input.txt", "/docs"}) {
        if(fs::exists(p)) {
            if(fs::is_directory(p)) {
                std::cout << p << " is a directory\n";
            }else{
                std::cout << p << " is a file\n";
            }
         } else{
             std::cout << p << " does not exist\n";
         }  
    }
} 
```
This code works the same way as your Rust snippet. It uses `std::experimental::filesystem` to verify if a file or directory exists and is it a directory or a regular file, then print out the result. Remember that for this code to work you need C++17 because of its use of filesystem module.

In earlier versions of C++ (pre-C++17), we would have had to use platform specific APIs to achieve similar functionality. But as of now, those are mostly not available due to the lack of a standardized way of doing it in the language itself.

