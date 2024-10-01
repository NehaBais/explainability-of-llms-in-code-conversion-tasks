```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

void createFile(const string& fn) {
    ofstream f(fn);
    if (!f.is_open()) {
        cerr << "Failed to open file " << fn << endl;
        return;
    }
    cout << "file " << fn << " created!" << endl;
    f.close();
}

void createDir(const string& dn) {
    if (!filesystem::exists(dn)) {
        filesystem::create_directory(dn);
    } else {
        cerr << "Directory " << dn << " already exists" << endl;
    }
}

int main() {
    createFile("output.txt");
    createFile("/output.txt");
    createDir("docs");
    createDir("/docs");
    return 0;
}
```
In Golang, `os.Create` is used to open a file for writing (if it doesn't exist, it will be created). In C++, we use the `ofstream` class from the `<fstream>` header to achieve similar functionality, and we can leverage the `filesystem` library from the `<filesystem>` header in C++17.

In this code, I've used a `try-catch` block to handle potential errors when opening files or creating directories. If an error occurs during file creation or directory creation, it's printed to standard error (cerr) and the function returns immediately.

The rest of the code is fairly straightforward, with the main difference being that there's no direct equivalent for `os.Mkdir` in C++. We can use `std::filesystem::create_directory()` to create directories if they don't exist already, or simply check if a directory exists using `exists()`.
