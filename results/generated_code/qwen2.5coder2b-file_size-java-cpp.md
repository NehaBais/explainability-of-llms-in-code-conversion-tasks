The equivalent C++ code for the given Java code is:

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Create a File object pointing to the current directory's file.txt
    ifstream fileA("file.txt");
    
    if (!fileA.is_open())
    {
        cout << "Error opening input.txt. Exiting program.";
        return 1;
    }
    
    int length = fileA.tellg();
    cout << "The size of file.txt is " << length << " bytes." << endl;

    // Create a File object pointing to the root directory's file.txt
    ifstream fileB("/file.txt");
    
    if (!fileB.is_open())
    {
        cout << "Error opening /file.txt. Exiting program.";
        return 1;
    }
    
    length = fileB.tellg();
    cout << "The size of /file.txt is " << length << " bytes." << endl;

    return 0;
}
```

In this code, we use the `ifstream` class to open files in C++, and utilize the `tellg()` method to get the current file position, which represents the number of bytes written so far. The `is_open()` function is used to check if the file could be opened successfully.
