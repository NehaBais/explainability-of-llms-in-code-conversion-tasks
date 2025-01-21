The equivalent C code would look like this:

```C
#include <iostream>
#include <filesystem>

int main(){
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("c:/input.txt", "c:/output.txt");
    std::filesystem::rename("docs", "mydocs");
    std::filesystem::rename("c:/docs", "c:/mydocs");

    return 0;
}
```
Please note that the `std::filesystem` library in C++17+ is required. It can be enabled by adding `#include <experimental/filesystem>` to your code.

Also, remember that this code assumes that you have the necessary permissions to execute these actions and that the paths "input.txt", "output.txt", "docs" and "mydocs" exist.
