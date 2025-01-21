The error occurs because of incorrect usage of namespace alias declaration, use of an undeclared identifier 'fs', and missing semicolon after if statement. 

The fix is to declare `std::filesystem` properly using the namespace keyword instead of the syntax for namespace alias. Moreover, you need to place a semicolon at the end of the if condition declaration. Finally, wrap all code inside main function in curly braces to enclose it within the main function scope. 

Here is the corrected C++17 code:

```cpp
#include <filesystem>
#include <iostream>

int main() {
    namespace fs = std::filesystem;
    
    fs::path p{"./path/to/dir"};
    
    try {
        if (!fs::exists(p)) {          // If the path does not exist...
            fs::create_directories(p);  // Create all directories along the path.
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "An error occurred: " << e.what() << '\n';
    }
    
    return 0;
}
```