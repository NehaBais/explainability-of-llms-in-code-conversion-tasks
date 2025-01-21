Fix explanation:

```
Replace str.substring(n) with str.substr(n, m))
```

Corrected code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "abcdefgh";

    int n = 2;
    int m = 3;

    // * starting from n characters in and of m length;
    std::cout << str.substr(n, m)) << std::endl; // => "cde"

    // * starting from n characters in, up to the end of the string;
    std::cout << str.substr(n)) << std::endl; // => "cdefgh"
    std::cout << str.substring(n)) << std::endl; // => "cdefgh"

    // * whole string minus last character;
    std::string end_str = str.substr(0, str.length() - 1));
    std::cout << end_str << std::endl; // => "abcdefg"

    // * starting from a known character within the string and of m length;
    int index = str.find('b');
    std::string result = str.substr(index, m)));
    std::cout << result << std::endl; // => "bcd"

    // * starting from a known substring within the string and of m length.
    index = str.find("bc");
    result = str.substr(index, m)));
    std::cout << result << std::endl; // => "bcd"
}
```
