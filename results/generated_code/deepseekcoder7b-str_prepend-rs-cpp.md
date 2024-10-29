In C++, you can use `std::string` along with the insert function to achieve this. Here's how you would implement it:

```C++
#include <iostream>
#include <string>

int main() {
    std::string s = "World";
    s.insert(0, "Hello ");
    
    std::cout << s;
}
``` 

This code does the same thing as your Rust code: it creates a string variable equal to any text value (in this case "World"), prepends another string literal ("Hello ") and prints out the result. The `insert` function in C++ takes two parameters - the position at which to insert, and what you want to insert. Here we are inserting at position 0, so it's inserted before everything else.

