Sure, the equivalent C++ code would be:

```cpp
#include <iostream>
using namespace std;
int main() {
    // Include necessary libraries
    std::ifstream file; 
    
    // Try to open the file "input.txt" in current directory
    try{
        file.open("input.txt");
        if (!file) throw "Failed to open file 'input.txt' in current working directory";
        std::cout << "Size of input.txt in current directory: " << std::endl;
        // Check if the file was opened successfully and print its size
        std::streamsize length = file.rdbuf()->in_avail(); 
        file.close();
        cout << length << endl;    
    } catch(const char* msg) {
        // Throw any exception that occurred while trying to open the file
        cerr << msg << std::endl;   
    }
    
    // Try to open the file "c:/input.txt" in root directory
    try{
        file.open("c:\\input.txt");
        if (!file) throw "Failed to open file 'c:\\input.txt' in filesystem root";
        std::cout << "Size of input.txt in filesystem root: " << std::endl;
        // Check if the file was opened successfully and print its size
        length = file.rdbuf()->in_avail(); 
        file.close();
        cout << length << endl;    
    } catch(const char* msg) {
        // Throw any exception that occurred while trying to open the file
        cerr << msg << std::endl;   
    }
    return 0;
}
```
Please note that C++ does not have a native method for accessing file sizes directly. Instead, it uses classes such as ifstream, which allow you to easily read data from files. The size of the file is stored in these objects automatically when they are opened.
