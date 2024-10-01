Here is the C++ code that implements the same functionality as the given C code:
```
#include 
#include 
#include 
#include 
#include 
using namespace std;
int mkdirp(const string& path) {
    char* p = const_cast(path.c_str());
    char* dir = dirname(p);
    
    if (mkdir(dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1 && errno != EEXIST) {
        return -1; // failed to create directory
    }
    
    return 0; // success
}
int main() {
    if (mkdirp("./path/to/dir") != 0) {
        cout << "Failed to create directory" << endl;
    } else {
        cout << "Directory created successfully" << endl;
    }
    return 0;
}
```
In this C++ code, the `mkdirp` function takes a single path string as input and creates any missing parent directories. The function first uses `dirname` to get the directory name of the given path. It then checks if the directory already exists using `stat`. If it doesn't exist, it creates the directory using `mkdir`. If the directory already exists or an error occurs, the function returns -1.

