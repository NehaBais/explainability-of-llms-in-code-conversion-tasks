Sure! Here is the equivalent C++ code for your Rust code: 

```cpp
#include <iostream>
#include <cstdlib>

int main() {
    const char* err = "File move error";
    if(rename("input.txt", "output.txt") == -1) {
        std::cerr << err << std::endl;
       return EXIT_FAILURE;
    }
    if(rename("docs", "mydocs") == -1) {
         std::cerr << err << std::endl;
         return EXIT_FAILURE;
    } 
    if(rename("/input.txt", "/output.txt") == -1) {
        std::cerr << err << std::endl;
       return EXIT_FAILURE;
    }  
    if(rename("/docs", "/mydocs") == -1) {
         std::cerr << err << std::endl;
         return EXIT_FAILURE;
    } 
   return EXIT_SUCCESS;
}
```
The `rename()` function in C++'s Standard Library is used to rename files or directories. If the operation fails, it returns -1 and hence we use that fact to check if there was an error with our renaming operations. Note also that the path to the file should be specified correctly based on where you want to perform the renaming in your filesystem.
