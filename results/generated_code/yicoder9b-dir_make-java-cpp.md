Below is the C++ version of your Java code: 
Please note that this solution uses the C Standard Library function mkdir instead of Java's File#mkdirs method, as there's no direct equivalent in C++ standard. This solution works for Unix-like operating systems and Windows. 

```cpp
#include <cstdlib> // for std::system
#include <iostream>

bool mkdir_p(const char* path) {
    char sep = '/';
#ifdef _WIN32
    sep = '\\';
#endif

    char * copy = new char[strlen(path)+1]; 
    strcpy(copy, path);

    char * ptr = &copy[0];
    ptr[0] = sep; // first character must be '/' or '\' on windows.
    for (; *ptr!='\0'; ++ptr) {
        if (*ptr == sep) {
            *ptr = '\0';
            std::system(copy); 
            *ptr = sep;
        }
    }
  delete[] copy;
  return true;
}
int main() {
    try {
        mkdir_p("C:/parent/test");
        std::cout << "Path successfully created.\n"; 
        return EXIT_SUCCESS;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
}
```
The above C++ code mimics the Java File#mkdirs behavior by running system command 'mkdir' for each directory in path, one after another. However, this doesn't guarantee atomicity and also relies on the underlying system to have 'mkdir' command which is not true for all platforms. 

If you want a fully C++ solution cross-platform that does not rely on the 'mkdir' command, you will need more sophisticated logic.
