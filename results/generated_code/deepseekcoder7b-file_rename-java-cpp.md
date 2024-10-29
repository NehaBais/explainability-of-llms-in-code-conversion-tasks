The C++ equivalent of the provided Java code is as follows - it should be compiled with a compiler that supports `C++17` or later to use filesystem operations.

```cpp
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;  // for convenience

void test(std::string type, const fs::path& oldname, const fs::path& newname) {
    if (fs::exists(oldname)) {
        std::cout << "The following " << type << " called \"" << oldname.filename().string() 
                  << (fs::rename(oldname,newname) ? " was renamed as " : " could not be renamed into ")
                  << newname.filename().string() << ".\n";
    } else {
        std::cout << "The following " << type << " called \"" << oldname.filename().string() 
                  << "\" does not exist.\n";
   <｜begin▁of▁sentence｜><｜end▁of▁sentence｜><｜begin▁of▁sentence｜> Let's go back to the previous step!

