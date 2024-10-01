Here's the equivalent C++ code for the given Golang code:
```c++
#include 
#include 
using namespace std;
 
void printFileSize(string f) {
    struct stat st;
    if (stat(f.c_str(), &st) == -1) {
        perror("Error");
    } else {
        cout << st.st_size << endl;
    }
}
 
int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```
Note: The `stat` function in C++ is used to get information about a file, and the `perror` function is used to print an error message if the `stat` function fails.

