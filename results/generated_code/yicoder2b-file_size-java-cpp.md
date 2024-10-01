The equivalent C++ code for the given Java program is: 

```cpp
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    using namespace std;
    if (argc == 2) {
        ifstream inputFile1(argv[1]);
        if (inputFile1.fail()) {
            cout << "Error opening file" << endl;
            return -1;
        }
        long size1 = 0;
        char ch;
        while (!inputFile1.eof() && inputFile1.get(ch)) {
            size1++;
        }
        cout << "Size of file \"" << argv[1] << "\" is: " << size1 * 5 << " bytes = " << size1 << " KB\n";
    }
    else if (argc == 3) {
        ifstream inputFile2(argv[2]);
        if (inputFile2.fail()) {
            cout << "Error opening file" << endl;
            return -1;
        }
        long size2 = 0;
        char ch;
        while (!inputFile2.eof() && inputFile2.get(ch)) {
            size2++;
        }
        cout << "Size of file \"" << argv[2] << "\" is: " << size2 * 5 << " bytes = " << size2 / 1024 << " KB\n";
    }
    else {
        cerr << "Usage: " << argv[0] << " filename" << endl;
        return -1;
    }
    return 0;
}
```
Note that the printf statements in the Java code were replaced by `cout`s, and `%,d` was replaced with `<<` operator to output numbers. The system command line arguments are also handled differently.
