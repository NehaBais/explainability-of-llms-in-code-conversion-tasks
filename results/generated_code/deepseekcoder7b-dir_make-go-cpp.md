Below is an example of how you can achieve this in C++ using `std::filesystem` which was added in C++17 and provides a portable way to handle file system operations. Note that you need to use c++17 or above version for it to work.
```c++
#include <iostream>
#include <filesystem>
 
bool create_dir(const std::string& path) {
    try{
        if(!std::filesystem::exists(path)){
            //create directory recursively
            std::filesystem::create_directories(path);
            return true;
        }
        else{
            //directory exists, so return false
            return false;
       <｜begin▁of▁sentence｜>         } 
    }catch (const std::filesystem::filesystem_error& e){
        // Handle exception by logging it or ignore for now
        std::cout << e.what() << '\n';  
    }
    
}
```
In this code, we use `std::filesystem::exists` to check if the directory exists and returns false if so. We then call `create_directories` on path which will create any missing parent directories as well. The function returns true if a new directory was created (i.e., one did not already exist at that path), and false otherwise.

