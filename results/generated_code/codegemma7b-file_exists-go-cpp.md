```cpp
#include <iostream>
#include <filesystem>

using namespace std;

void printStat(const string& p) {
    try {
        if (filesystem::is_directory(p)) {
            cout << p << " is a directory" << endl;
        } else {
            cout << p << " is a file" << endl;
        }
    } catch (const filesystem::filesystem_error& e) {
        cout << e.what() << endl;
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
    return 0;
}
```

**Explanation:**

* The `filesystem` header provides the necessary functionalities for checking the file system.
* The `is_directory()` function checks if the given path is a directory.
* The `filesystem_error` exception is caught to handle any errors encountered during file system operations.
* The code works as follows:
    * Prints the status of `input.txt` and `/input.txt` in the current working directory.
    * Prints the status of `docs` and `/docs` in the filesystem root.

**Note:**

* The code requires C++17 or later, as it uses the `filesystem` header.
* The `try-catch` block is used to handle potential exceptions.
* The `filesystem::path` class is not used in this code, as it is not necessary for the problem.
