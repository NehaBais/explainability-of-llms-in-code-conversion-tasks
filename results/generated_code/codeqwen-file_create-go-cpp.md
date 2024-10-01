The following code converts the Golang code to C++. It utilizes the `fstream` library in C++ for file and directory creation.

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h> // for mkdir function on Unix-based systems

using namespace std;

void createFile(const string& fn) {
    ofstream f;
    f.open(fn);
    if (!f.is_open()) {
        cout << "Error: could not open file " << fn << endl;
        return;
    }
    cout << "file " << fn << " created!" << endl;
    f.close();
}

void createDir(const string& dn) {
    int res = mkdir(dn.c_str(), 0777);
    if (res != 0) {
        cout << "Error: could not create directory " << dn << endl;
        return;
    }
    cout << "directory " << dn << " created!" << endl;
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
    return 0;
}
```

Remember, the `mkdir()` function in C++ has different behavior compared to Go's `os.Mkdir()`. The `0666` permission value (equivalent of Go's `0666`) is used for Linux-based systems while on Windows, it doesn't have such a parameter. So be aware when porting code from one language to another regarding file permissions.
