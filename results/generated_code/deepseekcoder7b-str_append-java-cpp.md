In C++, you can use the `+` operator for concatenating two strings or you can use the function `append()` for appending a string to another string. Here is how it could look like in C++:

```C++
#include <iostream>
#include <string>

int main(){
    std::string str = "abc";
    std::cout << str << '\n';
    
    // Using '+' operator
    str += "def";
  
    // Or using append function
    // str.append("def");

    std::cout << str << '\n';
}
```
You can run this C++ code in any compiler to see the result. If you have installed g++ on your computer, just copy and paste above code into a file with .cpp extension (for instance `str_append.cpp`), then open terminal/command prompt in the directory where you have put that file and type `g++ str_append.cpp -o output && ./output` to see the result.

