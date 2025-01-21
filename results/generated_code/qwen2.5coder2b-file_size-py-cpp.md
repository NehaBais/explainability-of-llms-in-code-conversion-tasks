Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("input.txt");
    if (file.is_open()) {
        cout << "File size: " << file.tellg() << endl;
        file.close();
    } else {
        cerr << "Unable to open input.txt" << endl;
    }

    file.open("/input.txt", ios::in);
    if (file.is_open()) {
        cout << "File size: " << file.tellg() << endl;
        file.close();
    } else {
        cerr << "Unable to open /input.txt" << endl;
    }
    return 0;
}
```

In this code, we use the `ifstream` class from the `<fstream>` header file to read from a file. We first attempt to open `input.txt`, and if successful, we get the size of the file using `tellg()`, which returns the current position of the file pointer in bytes relative to the beginning of the file. If there is an error opening the file (for example, it doesn't exist), a message will be printed to the standard error stream.

After that, we attempt to open `/input.txt` and perform the same operation. If successful, we print the size of the file. If there is an error opening the file, another message will be printed to the standard error stream.

Note that this code assumes that the file exists and is accessible by the user running the program.
