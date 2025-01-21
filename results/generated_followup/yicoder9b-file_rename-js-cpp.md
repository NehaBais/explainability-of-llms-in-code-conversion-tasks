The error is because `std::filesystem` namespace has been introduced with C++17, but it isn't available for your compiler yet or it might be disabled by your compiler settings.

To fix the error:
- You should use a newer version of your compiler if possible, as most recent compilers support C++17 and later versions. If that's not an option you can enable the C++17 standard manually in your compiler settings (usually under `-std=c++17`).
- Use the POSIX rename() function instead which is available everywhere:
```cpp
#include <cstdio>
int main(){
    rename("input.txt", "output.txt");
    rename("docs", "mydocs");
    rename("/input.txt", "/output.txt");
    rename("/docs", "/mydocs");
}
```
- Note that these versions only work on Unix-like systems and won't work on Windows due to different system calls used for file operations in those environments. For Windows you may need to use `WinAPI` functions (`MoveFileEx()` or `rename()` from `cstdio`) instead of C++17 filesystem library.
