Below is the equivalent C++ code for the given Python script. Note that C++ does not have a built-in function to create files or directories; you need to use the appropriate system calls (`open()`, `mkdir()` etc.) to achieve this task.
```cpp
#include <fstream>
#include <iostream>
#include <sys/stat.h>
 
using namespace std;
 
void create(const string &directory) {
    ofstream output_file = ofstream(directory + "/output.txt"); // Opens the file in write mode
    if (!output_file.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
 
    mkdir((directory + "/docs").c_str(), 0755); // Creates the directory
}
 
int main() {
    create(".");
    create("/");
    
    return 0;
}
```
The above code uses the `ofstream` object to open a file called "output.txt" in write mode and then creates an empty directory named "docs". The `mkdir()` function is used to create directories.
Please replace `directory` and `output_file` with the actual file path and filename where you want to save the output, respectively.
