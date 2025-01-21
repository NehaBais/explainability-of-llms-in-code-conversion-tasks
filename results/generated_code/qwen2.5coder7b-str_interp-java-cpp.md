In C++, you can use `std::string`'s `insert()` method or `std::ostringstream`. Here is how you do it:

1. Using insert():
```cpp
#include <iostream>
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric = "Mary had a X lamb";

    size_t pos = lyric.find('X');
    if (pos != std::string::npos) {
        lyric.insert(pos, adjective);
        lyric.erase(pos + adjective.length() + 1, 1); // Remove 'X'
    }

    std::cout << lyric << std::endl;

    return 0;
}
```

2. Using ostringstream:

#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric = "Mary had a X lamb";

    std::ostringstream oss;
    oss << "Mary had a " << adjective << " lamb";
    lyric = oss.str();

    std::cout << lyric << std::endl;

    return 0;
}

Both of these code snippets work by replacing 'X' in the string "Mary had a X lamb" with the string stored in `adjective`.
