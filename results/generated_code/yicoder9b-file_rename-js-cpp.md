Converting this JavaScript code to C++ is not straightforward because C++ standard library doesn't provide a built-in function for renaming files or directories like the FSO (FileSystemObject) used in your original script. However, you can use the rename() function from the <filesystem> library in recent versions of C++ (C++17 and above) to accomplish this task:

Here's how it might look in one version for the current working directory:
```cpp
#include <filesystem>
namespace fs = std::filesystem;

int main() {
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");
    fs::rename("/input.txt", "/output.txt");
    fs::rename("/docs", "/mydocs");
}
```

You will need to have the C++17 standard enabled in your compiler. Also note that these code snippets only work on POSIX-compliant systems (like Linux and MacOS), not on Windows. For Windows you would need to use the rename() function from the cstdio library or the WinAPI.
