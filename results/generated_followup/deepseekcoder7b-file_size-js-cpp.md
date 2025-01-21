The error message "`'experimental/filesystem' file not found`" is because there is no header file named `<experimental/filesystem>` that could be located by compiler during compilation. 

To fix this, you need to use C++17 feature (specifically filesystem related features) which are available in GCC version 8 or later onwards, as the standard library itself doesn't provide these utilities yet. You can install it from here - https://gcc.gnu.org/install/, but if you are using a package manager like apt to install your compiler, make sure that is up-to-date with GCC 8 or later. 

Here is the corrected code:
```cpp
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
int main() {
   // For the current working directory file
   auto size = fs::file_size("input.txt");
   if(size != static_cast<uintmax_t>(-1))
     std::cout << "Size of input.txt in current dir: " << size << "\n";
   else
     std::cerr << "Could not get file size.\n";
   
   // For a root directory file
   fs::path p = "/home/user/input.txt"; 
   auto size2 = fs::file_size(p);
   if(size2 != static_cast<uintmax_t>(-1))
     std::cout << "Size of input.txt in root dir: " << size2 << "\n";
   else
     std::cerr << "Could not get file size.\n";
   
   return 0;
}
```

