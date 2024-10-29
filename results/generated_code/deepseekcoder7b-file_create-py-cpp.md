The C++ equivalent of the given Python code is as follows -
C++ doesn't have a built-in way to create a file at the filesystem root so we will use `fstream` along with `ofstream`. The function below creates an empty "output.txt" and a directory named "docs". It does this twice, once in the current working directory (".") and again in the filesystem root ("/").
```C++
#include <iostream>
#include <fstream>
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;
  
void create(string directory) { 
    string filename = directory + "/output.txt";
    ofstream outfile;
    outfile.open(filename, ios::out | ios::app); // "ios::app" flag is used to open file in append mode (creates a new one if doesn'<｜begin▁of▁sentence｜>t exist)
    outfile.close();                             // close the file as we only want an empty file
    
    fs::create_directory(fs::path(directory + "/docs"));  // create directory
} 
  
int main() { 
    create(".");  // current directory
    create("/");  // filesystem root (not recommended, it may not work in all systems)
                  
    return 0; 
}
```
Note: The provided C++ code is a direct translation of the given Python script. It might not compile on some systems due to differences between how file handling works in different platforms and languages like Linux vs Windows etc. To actually create an empty file at filesystem root in all platforms, it requires elevated privileges or changes in operating system settings which are beyond the scope of simple C++ code.

