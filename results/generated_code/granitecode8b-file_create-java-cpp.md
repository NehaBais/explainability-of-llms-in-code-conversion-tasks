Here is the converted code from Java to C++:
```
#include 
#include 
using namespace std;
int main() {
 try {
 ofstream file("output.txt");
 file.close();
 ofstream root_file("/output.txt");
 root_file.close();
 mkdir("docs");
 mkdir("/docs");
 } catch (exception& e) {
 cout << e.what() << endl;
 }
 return 0;
}
```
In the converted code, we use the `ofstream` class to create an empty file called "output.txt". We also use the `mkdir` function from the `cstdlib` library to create an empty directory called "docs". To create the files and directories in both the current working directory and the filesystem root, we use the absolute pathnames instead of just the filenames.

