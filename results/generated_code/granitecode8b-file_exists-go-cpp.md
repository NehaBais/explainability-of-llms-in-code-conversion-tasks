Here is the converted code from Golang to C++:
```cpp
#include 
#include 
using namespace std;
int main() {
 string path = "input.txt";
 struct stat file_info;
 if (stat(path.c_str(), &file_info) == -1) {
 cout << "Error accessing file: " << strerror(errno) << endl;
 } else {
 if (S_ISDIR(file_info.st_mode)) {
 cout << path << " is a directory" << endl;
 } else {
 cout << path << " is a file" << endl;
 }
 }
 path = "/input.txt";
 if (stat(path.c_str(), &file_info) == -1) {
 cout << "Error accessing file: " << strerror(errno) << endl;
 } else {
 if (S_ISDIR(file_info.st_mode)) {
 cout << path << " is a directory" << endl;
 } else {
 cout << path << " is a file" << endl;
 }
 }
 path = "docs";
 if (stat(path.c_str(), &file_info) == -1) {
 cout << "Error accessing file: " << strerror(errno) << endl;
 } else {
 if (S_ISDIR(file_info.st_mode)) {
 cout << path << " is a directory" << endl;
 } else {
 cout << path << " is a file" << endl;
 }
 }
 path = "/docs";
 if (stat(path.c_str(), &file_info) == -1) {
 cout << "Error accessing file: " << strerror(errno) << endl;
 } else {
 if (S_ISDIR(file_info.st_mode)) {
 cout << path << " is a directory" << endl;
 } else {
 cout << path << " is a file" << endl;
 }
 }
 return 0;
}
```
Note that the `strerror` function in C++ returns a pointer to a string describing the last error, so you should use `cout << strerror(errno)` instead of `cerr << errno`. Also, make sure to include the necessary header files for `stat`, `struct stat`, and `S_ISDIR`.

