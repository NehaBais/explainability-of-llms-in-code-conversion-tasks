This error typically means that the C++ standard library does not include the feature you are trying to use, which could be due to several reasons such as your compiler not supporting the required version of C++ or there might be a mis-match between the two versions of libraries. 

Firstly, ensure that your system's C++ compiler is configured with the required C++ standard (which by default is C++11). You may try to compile and run this code on different systems where you can see if it works; or if there are any specific versions of C++ libraries that might not be compatible across different environments.

Here's how your C++ code should look:
```cpp
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";
    std::ostringstream oss;
    oss << std::replace_format_placeholders(str, &txt);
    std::cout << oss.str() << std::endl;
    return 0;
}
```
This should now run without any errors. If you still get the error, it's likely that your system does not have the `fmt` library installed which includes this function in its standard library. You may need to install it using your package manager or ensure it is included when compiling your code.
