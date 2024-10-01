Sure, here is the equivalent C++ code for your Golang program - 

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <cerrno>
using namespace std;
int main() {
    struct stat st;
    if (stat("input.txt", &st) == 0) {
        cout << "Size of input.txt : "<< st.st_size << " bytes\n";
    } else if (errno == ENOENT) {
        cout << "File not found!\n";
    } else {
        perror("stat failed");
    }
    if (stat("/input.txt", &st) == 0) {
        cout << "/input.txt Size : "<< st.st_size << " bytes\n";
    } else if (errno == ENOENT) {
        cout << "/File not found!\n";
    } else {
        perror("stat failed");
    } 
    return 0;
}
```
Please note that the `/input.txt` file is a root-level file, and hence the path must be absolute. If this C++ code runs on your local system, the "/input.txt" will point to your current working directory (which may vary depending upon your configuration).
