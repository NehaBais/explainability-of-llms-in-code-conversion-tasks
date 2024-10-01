 The Rust code uses the `Add` trait to perform the addition in a more idiomatic way, where as C++ doesn't provide a built-in method for string concatenation. Therefore, we have to manually append one string to another using the `+` operator or use stringstreams (fstream) from `<sstream>` library.

Here is an equivalent version of your Rust code in C++:
```c++
#include <iostream>
#include <string>

int main(){
    std::string hello = "Hello world";
    hello += "!!!!"; // or you can use the + operator, but it will create a new object and old one will be lost.
    std::cout << hello << std::endl;
    return 0;
}
```
And here is the version with stringstream:

#include <iostream>
#include <string>
#include <sstream> // for stringstream

int main(){
    std::string hello = "Hello world";
    
    std::stringstream ss;
    ss << hello << "!!!!";

    std::cout << ss.str() << std::endl;
    return 0;
}
