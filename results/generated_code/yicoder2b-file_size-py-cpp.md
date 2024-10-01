Sure, here is how you can write this Python code in C++ - 

```cpp
#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    using namespace std;
    char filepath[] = "input.txt";
    long long size1, size2; // Using 'long long' to handle files larger than 4 GB.

    // Verify the size of a file called input.txt for a file in current working directory
    FILE *fp = fopen(filepath, "rb");
    if (fp == NULL) {
        cout << "File not found or could not be opened.";
        return 0; // Return zero to indicate error
    } else {
        fseek(fp, 0, SEEK_END);
        size1 = (long long)(ftell(fp));
        fclose(fp);
    }

    cout << "Size of the file in current working directory is : "<< size1 << " bytes" << endl;

    // Verify the size of a file called input.txt for a file in filesystem root
    filepath[0] = '/'; // Put leading slash at the beginning of file path to access it from root
    fp = fopen(filepath, "rb");
    if (fp == NULL) {
        cout << "File not found or could not be opened.";
        return 0; // Return zero to indicate error
    } else {
        fseek(fp, 0, SEEK_END);
        size2 = (long long)(ftell(fp));
        fclose(fp);
    }

    cout << "Size of the file in filesystem root is : "<< size2 << " bytes" << endl;
    return 0;
}
```
This program uses C standard libraries 'cstdio' and 'cstring' to read a file. The function `fseek(fp, 0, SEEK_END)` moves the pointer at the end of the file, then `ftell(fp)` returns the new offset from the beginning of the file (or the current input/output position) to the file pointer.

Please note that this code does not handle errors gracefully - in a production environment you would want to ensure that fopen and fseek return non-null pointers, check that the size can be accurately calculated, etc. You should also consider using a modern C++ feature, like std::filesystem or boost filesystem if possible to make your code more portable.
