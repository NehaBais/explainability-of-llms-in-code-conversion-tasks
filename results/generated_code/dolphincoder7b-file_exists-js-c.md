Below is the converted C code:
```C
#include <io.h>
#include <iostream>

int main() {
    int file1 = _access("input.txt", 0);
    int file2 = _access("c:/input.txt", 0);
    int dir1 = _access("docs", 0);
    int dir2 = _access("c:/docs", 0);
    
    std::cout << "File exists: " << (file1 != -1) << std::endl;
    std::cout << "File exists: " << (file2 != -1) << std::endl;
    std::cout << "Directory exists: " << (dir1 != -1) << std::endl;
    std::cout << "Directory exists: " << (dir2 != -1) << std::endl;
    
    return 0;
}
```
