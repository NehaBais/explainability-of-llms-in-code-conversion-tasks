### Answer
```
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("output.txt"); // Create an empty file called "output.txt" in the current directory
    if (!outputFile) {
        cerr << "Error creating output.txt\n";
        return 1;
    }
    
    ofstream rootOutputFile("/output.txt"); // Create an empty file called "/output.txt" in the filesystem root
    if (!rootOutputFile) {
        cerr << "Error creating /output.txt\n";
        return 1;
    }
    
    mkdir("docs", 0755); // Create a directory called "docs" in the current directory with default permissions
    mkdir("/docs", 0755); // Create a directory called "/docs" in the filesystem root with default permissions
    
    return 0;
}
```
