This is the equivalent C++ code for the given Rust program: 
```
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class FileSize {
public:
    string file_name;
    fstream fs;
    int len;
    char c;
    bool success;
    string err;
    void set_file_name(string name) {
        file_name = name;
    }
    void get_file_size() {
        fs.open(file_name);
        if (!fs.is_open()) {
            err += "Failed to open file.";
            success = false;
            return;
        }
        len = fs.tellg();
    }
};
int main() {
    FileSize input{};
    string line;
    vector<string> args = {"input.txt"};
    ifstream in(args[0]);
    while (getline(in, line)) {
        cout << "Line from file: " << line << endl;
    }
    return 0;
}
```
The class FileSize has the following attributes and methods:
* file_name - The path of the file to be read.
* fs - An fstream object that represents the file in question.
* len - The length of the file, as determined by the tellg method.
* c - A character variable for storing a single byte from the file.
* success - A boolean flag indicating whether the operation was successful.
* err - A string variable to store any error messages.
The set_file_name() function takes a string parameter, which is stored in the file_name attribute. The get_file_size() function opens the file and stores its size in the len attribute, or sets success to false if the open operation fails.

In the main() method of the C++ program, an instance of the FileSize class is created and used to read from a file called "input.txt." The getline function reads each line of the file into the line variable until end-of-file is reached.
