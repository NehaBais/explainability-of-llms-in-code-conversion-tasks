The error `use of undeclared identifier 'snprintf'` occurs because the function `snprintf` is not declared anywhere before this point in the code, so the compiler cannot find it.

To fix this issue, you need to include the correct header file for `snprintf()`. The proper header file should be `stdlib.h` in C++ standard mode (which is included by default when compiling with `-std=c++14`). If you're using a different mode like `gcc -std=c99` or another one, the appropriate header file would be `string.h`.

The error `use of undeclared identifier 'perror'` occurs because the function `perror()` is not declared anywhere before this point in the code, so the compiler cannot find it. You should include `stdio.h` or a similar header file if you need to use `perror()`.

The corrected C++ code now looks like this:

```cpp
#include <cstring> // Include this instead of stdlib.h in standard mode
#include <iostream>  // If you're going to use cout or cerr 

int mkdirp(const char *path) {
    char buffer[256];
    std::strncpy(buffer, path, strlen(path)); // Use std::strncpy instead of manual looping
    
    // Replace slashes with NULLs and then sort the buffer
    for (int i = 0; i < std::strlen(buffer); ++i) {
        if (buffer[i] == '/') {
            buffer[i] = '\0';
            std::qsort(&buffer[i+1], std::strlen(buffer)-i-1, sizeof(char), cmpfunc);
        }
    }
  
    // Check if the directory exists
    struct stat info;
    if (stat(buffer, &info) == 0 && S_ISDIR(info.st_mode)) {
      return 0; // Directory exists and is a directory, return successfully
    } else {
        // Directory does not exist or it's not a directory so make a new one
        if (mkdir(buffer, 0755) < 0) {  
            std::cerr << "mkdirp: " << buffer << " failed"; // Output error message to cerr
            return -1; // Return -1 on failure to indicate a problem
        }
    }

    // If we've gotten here, the directory was not found or could not be created so return -2 for an error.
    return -2; 
}
```
