In C++, you can use `std::stringstream` and the `operator<<` to achieve string interpolation similar to Java's `String.format()`. Here is how it could be done:

```cpp
#include <iostream> 
#include <sstream> 
using namespace std;

int main() {
    string adjective = "little";
    stringstream lyric;

    lyric << "Mary had a " << adjective << " lamb." ;

    cout << lyric.str();

    return 0;
}
```

In this C++ code, we are creating an object of `std::stringstream` and then using the `operator<<` to insert the string (`"Mary had a "`), variable (`adjective`), and another string (`" lamb."`) into our lyric stream in that order. We finally use `str()` method on lyric to get the resulting string from the stream which is similar to getting output of printf() in Java.
