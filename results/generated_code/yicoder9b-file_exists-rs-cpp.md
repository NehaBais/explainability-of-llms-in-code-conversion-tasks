Sure. Here's the equivalent C++ code:

```C++
#include <iostream>
#include <filesystem>

int main() {
    for (const std::string& file : {"input.txt", "docs", "/input.txt", "/docs"}) {
        if(std::filesystem::exists(file)){
            if(std::filesystem::is_directory(file)){
                std::cout << file << " is a directory\n";
            } else {
                std::cout << file << " is a file\n";
            }
        }else{
            std::cout << file << " does not exist\n";
        }
    }
    return 0;
}
```
Please note that you will need to compile this with `-std=c++17` or higher because the C++ standard libraries do not yet fully support the filesystem library.

Also, the error handling in Rust and C++ is done differently - In Rust we have the match keyword for error handling which provides a way to extract values from enums, and in C++ we use an if-else statement to check whether file exists or not using `std::filesystem::exists` function.
