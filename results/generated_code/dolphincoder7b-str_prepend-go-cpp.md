To convert the given Golang code to C++, we first need to set up the necessary libraries and namespaces in the C++ program. Additionally, note that Go does not have a built-in `string` type like C++ does, so we need to use an equivalent data structure such as `std::string`.

Here is the converted code:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "world!";
    s = "Hello, " + s;
    std::cout << s << std::endl;
    return 0;
}
```
In this code, we declare a `std::string` variable called `s`, initialize it with the value `"world!"`, and then perform the concatenation operation to prepend another string literal ("Hello, ") before the existing content. Finally, we output the resultant string using the standard C++ `cout` function followed by an explicit `endl` to insert a new line character at the end of the output.

This code can be compiled and executed as follows:

$ g++ -o hello helloworld.cpp
$ ./hello
Hello, world!

