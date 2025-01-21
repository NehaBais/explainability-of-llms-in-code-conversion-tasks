The error message indicates that the `std::filesystem` namespace is not available on this compiler/standard setting combination. 

In order to fix it, please make sure you are using a C++17 or later standard when compiling your code. This can be done by including "-std=c++17" in your g++ command line as mentioned above. For example: `g++ file.cpp -std=c++17 -o out`

Once this is resolved, the corrected C++17+ filesystem based function would look like this:

```cpp
#include <filesystem>
#include <iostream>

void mkdirp(std::string path) {
  std::error_code ec;
  
  if(!std::filesystem::exists(path)) { // Check if directory exists
    std::filesystem::create_directories(path, ec);
    
    if (ec) {
      throw std::runtime_error("Error occurred: " + std::string(ec.message()));
    }
  }
}
```
Please note that you still need to compile your code with C++17 or later standard. For example, `g++ file.cpp -std=c++17 -o out`

