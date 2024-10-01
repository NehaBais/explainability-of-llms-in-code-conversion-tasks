 The equivalent C++ code would be:

```cpp
#include <filesystem>
#include <system_error>

int main() {
    std::error_code ec;
    std::filesystem::create_directories("./path/to/dir", ec); 
    
    if(ec) {
        throw std::system_error(ec, "An error occurred!");
    }
}
```

In this code, we're using the `std::filesystem::create_directories` function to create a directory and its parents. If there is an error in creating the directories (for example, if they already exist or if it doesn't have sufficient permissions), then `ec` will be set appropriately. 

The rest of the code uses this error object to throw a `std::system_error`, passing it the existing `ec`. This is how exceptions are typically thrown in C++, with an appropriate error message.
