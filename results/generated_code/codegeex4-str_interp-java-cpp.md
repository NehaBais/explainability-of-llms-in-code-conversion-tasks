In C++, you can use the `std::stringstream` object to handle string formatting. Here is how you would convert your Java code into C++:

```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string adjective = "little";
    std::ostringstream oss;
    oss << "Mary had a " << adjective << " lamb";
    std::string lyric = oss.str();
    
    std::cout << lyric;

    return 0;
}
```

In this code, we use `std::ostringstream` object to concatenate the string and the variable value. The function `str()` is used to get the concatenated string from the `std::ostringstream` object.

Note: `std::stringstream` is a stream class to operate on strings, and can be treated as any input/output stream (cin/cout). It allows you to read/write strings in the same way as with cin and cout. It’s part of the C++ Standard Library, included in <sstream> header file.

However, if you want the functionality similar to `String.format()` in Java, then you might use libraries such as Boost Format or fmtlib (Formatting library). This will give more power when it comes to complex formatting.
