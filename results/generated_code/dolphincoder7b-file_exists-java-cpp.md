This is a basic C++ program that checks if a file or directory exist. 

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Check if docs/input.txt exists
    ifstream file_exists("docs/input.txt");

    if (file_exists) {
        cout << "The file 'docs/input.txt' exists." << endl;
    } else {
        cout << "The file 'docs/input.txt' does not exist." << endl;
    }

    // Check if /docs/input.txt exists
    ifstream root_file_exists("/docs/input.txt");

    if (root_file_exists) {
        cout << "The file '/docs/input.txt' exists." << endl;
    } else {
        cout << "The file '/docs/input.txt' does not exist." << endl;
    }
    
    return 0;
}
```

This program defines a function called `main()` which opens the file using an `ifstream` (input file stream) and checks if it is open before proceeding. The `/docs/input.txt` path is used to check whether or not the root directory exists. If both files exist, the program will print "The file 'docs/input.txt' exists." and "The file '/docs/input.txt' exists.", respectively. If either file does not exist, the program will print "The file 'docs/input.txt' does not exist." or "The file '/docs/input.txt' does not exist.", accordingly.
