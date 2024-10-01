The JavaScript code is using ActiveXObject to interact with the file system. There's no direct equivalent in C++ Standard Library, but we can use a third-party library or platform-specific APIs to achieve this. For simplicity, I will demonstrate how to do it on Windows, assuming you have Visual Studio installed.

Here's how you could do it using the Windows API:

```cpp
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // Get file size of input.txt in current working directory
    WIN32_FIND_DATA FindFileData;
    HANDLE hFind = FindFirstFile("input.txt", &FindFileData);
    if (hFind != INVALID_HANDLE_VALUE) {
        LARGE_INTEGER size;
        size.LowPart = FindFileData.nFileSizeLow;
        size.HighPart = FindFileData.nFileSizeHigh;
        cout << "Size of 'input.txt' in current working directory: " << size.QuadPart << endl;

        FindClose(hFind);
    }
    else {
        wcout << L"File not found!" << endl;
    }

    // Get file size of input.txt in root directory
    hFind = FindFirstFile("c:/input.txt", &FindFileData);
    if (hFind != INVALID_HANDLE_VALUE) {
        LARGE_INTEGER size;
        size.LowPart = FindFileData.nFileSizeLow;
        size.HighPart = FindFileData.nFileSizeHigh;
        cout << "Size of 'input.txt' in root directory: " << size.QuadPart << endl;

        FindClose(hFind);
    }
    else {
        wcout << L"File not found!" << endl;
    }

    return 0;
}
```
This code is using the `FindFirstFile` function to get information about files in the file system. It then extracts the file size from the `WIN32_FIND_DATA` structure and prints it out.

Please note that this code only works on Windows. If you want a cross-platform solution, you'd have to use platform-specific APIs or third-party libraries like Boost.Filesystem.

And if you don't want to include any extra libraries, you can create a console application in Visual Studio and make sure the necessary Windows SDKs are installed.
