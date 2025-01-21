The equivalent C++ code for the given JavaScript code would use functions from Windows API. Here is how you can achieve this:

```cpp
#include <iostream>
#include <windows.h>

int main() {
    // Get file size in current working directory.
    WIN32_FILE_ATTRIBUTE_DATA fileAttrib;
    if(GetFileAttributesEx("input.txt", GetFileExInfoStandard, &fileAttrib)) {
        ULARGE_INTEGER fileSize = fileAttrib.nFileSizeHigh;
        fileSize.QuadPart += fileAttrib.nFileSizeLow;
        std::cout << "Size of 'input.txt' in the current working directory is: " << fileSize.QuadPart << " bytes." << std::endl;
    } else {
        std::cerr << "Failed to get attributes for 'input.txt'" << std::endl;
    }

    // Get file size in root of the C drive.
    if(GetFileAttributesEx("C:\\input.txt", GetFileExInfoStandard, &fileAttrib)) {
        ULARGE_INTEGER fileSize = fileAttrib.nFileSizeHigh;
        fileSize.QuadPart += fileAttrib.nFileSizeLow;
        std::cout << "Size of 'input.txt' in the root of C drive is: " << fileSize.QuadPart << " bytes." << std::endl;
    } else {
        std::cerr << "Failed to get attributes for 'C:\\input.txt'" << std::endl;
    }

    return 0;
}
```

This code uses Windows API's `GetFileAttributesEx` function. It retrieves the file attributes of a specified file and stores them in a `WIN32_FILE_ATTRIBUTE_DATA` structure. The size of the file is available in the `nFileSizeHigh` and `nFileSizeLow` members of this structure. They represent the high-order and low-order 32 bits of the file size, respectively.

Note: This code will only work on Windows systems as it uses Windows-specific API calls.
