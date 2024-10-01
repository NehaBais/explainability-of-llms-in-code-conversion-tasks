 In Java, the `File` class is used to represent a file on the file system. The `exists()` method of the `File` class returns true if the file exists and false otherwise.
In C++, we use the `std::ifstream` and `std::ofstream` classes to perform operations on files. We can use these classes to check if a file or directory exist.
Here is the converted code:
```c++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Check if input.txt exists in the current working directory
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Input file does not exist." << endl;
    } else {
        cout << "Input file exists." << endl;
    }

    // Check if input.txt exists in the root directory of the file system
    ifstream rootFile("/input.txt");
    if (!rootFile) {
        cout << "Root file does not exist." << endl;
    } else {
        cout << "Root file exists." << endl;
    }

    return 0;
}
```
