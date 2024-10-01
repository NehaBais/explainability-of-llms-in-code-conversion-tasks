Here is the code converted from Python to C++:
```
#include 
#include 
void create(const std::string& directory) {
 std::ofstream output("output.txt");
 output.close();
 mkdir((directory + "/docs").c_str());
}
int main() {
 create("."); // current directory
 create("/"); // root directory
 return 0;
}
```
This code uses the `std::ofstream` class to create an empty file called "output.txt" in the specified directory, and the `mkdir()` function from the `` library to create an empty directory called "docs". The `create()` function takes a string argument `directory` which specifies the directory where the files should be created.

