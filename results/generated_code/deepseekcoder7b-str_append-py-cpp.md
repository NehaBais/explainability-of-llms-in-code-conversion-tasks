Here is the equivalent C++ code for your Python script:

```c++
#include <iostream>
#include <string>

int main() {
    std::string str = "12345678";  // Create a string variable and assign it value.
    str += "9!";                    // Append the string variable with another string literal.
    std::cout << str << std::endl;   // Show the contents of the variable after the append operation.
    
    return 0;
}
```

This C++ code does exactly what your Python script does: it creates a `std::string` (equivalent to Python's `str`), appends another string, and prints out the result. It uses the same += operator for both assignment and concatenation as in Python. The equivalent way of printing things out is via `std::cout <<` statements wrapped with `<< std::endl;` at the end to flush the output buffer (equivalent to print function). 
Remember, C++ code has to be compiled into an executable file before you can run it. This C++ code should be saved in a .cpp file and then compile using g++ compiler like: `g++ filename.cpp -o outfilename` and execute the output file `outfilename` on terminal.

