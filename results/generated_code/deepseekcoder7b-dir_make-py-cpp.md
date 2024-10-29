Below is the equivalent C++ code to achieve the same result:

```cpp
#include <iostream>
#include <filesystem>

void mkdirp(std::string path) {
    std::error_code ec;
    if(!std::filesystem::exists(path))  // Check if directory exists
        std::filesystem::create_directories(path,ec);  
    
    if(ec){
      throw std::runtime_error("Error occured: " + std::string(ec.message()));
    }
}
```

This function uses the C++17 filesystem library to create directories and all parent directories as needed. It first checks if the directory exists, if not it proceeds to make directories recursively. The `std::filesystem::create_directories()` method is equivalent to Python's os.makedirs().

However please note that, to use filesystem library you must compile your code with C++17 or later standard as follows: g++ file.cpp -std=c++17 -o out 

As of now the error_code mechanism is platform-independent and should work across different platforms as long as they support C++17. However, if you want to handle specific error codes in a more portable way (which is not necessary on modern systems), you would need to manually check individual error conditions for each function call. 

Please note that the filesystem library may behave differently under Windows and POSIX operating systems so it's always good practice to test your code using both platforms when possible.

