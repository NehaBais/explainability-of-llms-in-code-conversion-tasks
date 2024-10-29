The C++ equivalent of the Python code you provided would look something like this:

```c++
#include <iostream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

int main() {
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");
    
    fs::path current_working_dir = fs::current_path();
    fs::rename(current_working_dir / "input.txt", current_working_dir / "output.txt");
    fs::rename(current_working_dir / "docs", current_working_dir / "mydocs");
    
    // For the filesystem root, you will need to have an absolute path which can be hard-coded depending on your file system structure:
    fs::rename("C:/input.txt", "C:/output.txt");  // replace 'C:/' with your actual root directory path in Windows.
    fs::rename("C:/docs", "C:/mydocs");            // Replace 'C:/' with your actual root directory path in Windows.
    
    return <｜begin▁of▁sentence｜>0;
}
```
Please note that for the C++ standard library, renaming directories is not supported. You may need to remove the directory before you can rename it. If the target location already exists, it will cause an error. Also `std::experimental::filesystem` namespace does not exist in older versions of gcc or clang and above mentioned code won't compile with them, instead for Windows one could use `<windows.h>` header file along with `_wrename()` function which provides wide character support. 

For the case where you want to get root directory path on windows, it can be obtained by following way:

fs::path root = fs::v1::absolute(fs::v1::path(".")).root_directory();

