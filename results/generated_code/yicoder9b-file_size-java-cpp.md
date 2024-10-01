In C++ you can use the `<sys/stat>` library to get information about a file such as size. Here is how this Java code might be converted into C++:

```cpp
#include <iostream>
#include <cstdlib>
#include <sys/stat>

int main() {
    struct stat st;
  
    // Verify the size of a file called input.txt for a file in the current working directory 
    if (stat("input.txt", &st) == 0) {
        std::cout << "Size of input.txt: " << st.st_size << " B" << std::endl;
    } else {
        std::cerr << "Unable to get the size of input.txt" << std::endl;
    }
  
    // Verify the size of another file in the file system root, you would replace /file.txt with your actual path 
    if (stat("/file.txt", &st) == 0) {
        std::cout << "Size of /file.txt: " << st.st_size << " B" << std::endl;
    } else {
        std::cerr << "Unable to get the size of /file.txt" << std::endl;
    }

    return 0;
}
```

This C++ code does essentially the same thing as your Java code. It creates a `struct stat` variable and uses it to store file information. The `stat()` function is called with the filename as its first parameter and the address of this struct as its second. If successful, it populates the struct with information about the file (including size).
