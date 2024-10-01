Here is the converted code from Golang to C++:
```c++
#include 
#include 
using namespace std;
void createFile(string fn) {
 ofstream f(fn);
 if (f.fail()) {
 cout << "Error creating file: " << fn << endl;
 return;
 }
 cout << "File created: " << fn << endl;
}
void createDir(string dn) {
 if (!filesystem::create_directory(dn)) {
 cout << "Error creating directory: " << dn << endl;
 return;
 }
 cout << "Directory created: " << dn << endl;
}
int main() {
 string currentWorkingDir = getcwd(nullptr, 0); // Get the current working directory
 createFile("input.txt");
 createFile(currentWorkingDir + "/input.txt");
 createDir("docs");
 createDir(currentWorkingDir + "/docs");
 return 0;
}
```
In this converted code:
- The `createFile()` function now uses the `ofstream` class from the `` library to create a new file instead of the `Create()` function from the `os` module in Golang.
- The `createDir()` function now uses the `filesystem::create_directory()` function from the `` library to create a new directory instead of the `Mkdir()` function from the `os` module in Golang.
- The `main()` function now gets the current working directory using the `getcwd()` function and passes it as an argument to the `createFile()` and `createDir()` functions to ensure that the files are created in both the current working directory and the filesystem root.

