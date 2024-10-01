In C++, you can use the `%s` and `printf()` function to perform string interpolation. Below is how you could replicate your Java code in C++:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string adjective = "little";
    string lyric = "Mary had a %s lamb";
    
    printf(lyric.c_str(), adjective.c_str());  // output: Mary had a little lamb
    return 0;
}
```

In this code, `%s` is used as a placeholder for where the adjective string should be inserted. The `printf()` function then prints out "Mary had a little lamb", which is a formatted version of the original string with the adjective variable inserted in the correct position.
The `c_str()` function is called on both strings to convert them to character arrays that can be passed to `printf()`. This is necessary because `printf()` expects null-terminated C-style strings, not C++ strings.
