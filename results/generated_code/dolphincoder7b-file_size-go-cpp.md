```cpp
#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>
using namespace std;

void print_file_size(const string& file) {
    struct stat st;
    if (stat(file.c_str(), &st) != 0) {
        cout << "Failed to get information for '" << file << "'" << endl;
    } else {
        cout << "Size of '" << file << "' is: " << st.st_size << " bytes" << endl;
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    return 0;
}
```
