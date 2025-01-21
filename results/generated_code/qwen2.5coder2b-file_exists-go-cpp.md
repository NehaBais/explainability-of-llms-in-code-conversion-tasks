The equivalent code in C++ would look like this:

```cpp
#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

void printStat(string p) {
    if (exists(p)) {
        if (is_directory(p))
            cout << p << " is a directory" << endl;
        else
            cout << p << " is a file" << endl;
    } else {
        cout << "Error: Cannot find " << p << endl;
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
}
```

In this code, we use the C++ Standard Library's filesystem library to check if a file or directory exists. The `exists` function checks if a path exists and is either a regular file or a directory. The `is_directory` function checks if a given path is a directory. We then print the appropriate message based on the outcome of these functions. Note that this code will only compile in C++17+ because it uses features like `std::filesystem` which are not available in older versions of the language.

Please note, that these functions use `/`, not `\`, as the path separator. In Windows, you would use `\\`.
