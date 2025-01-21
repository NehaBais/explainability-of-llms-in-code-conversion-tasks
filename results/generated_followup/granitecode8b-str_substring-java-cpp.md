The error message indicates that there are multiple issues with the code. The first three errors are related to missing header files for the `string` class, while the next two errors are related to undefined variables and types. The last error is a syntax error in the return statement.

Here is the corrected code:
```c++
#include <string>
using namespace std;

string Substring(string str, char c, int m) {
    string::size_type pos = str.find(c);
    if (pos != string::npos) {
        return str.substr(0, pos + m);
    } else {
        return "";
    }
}
```
This code defines a function `Substring` that takes in a `string`, a character, and an integer as parameters, and returns a substring of the original string. The function uses the `find` method to find the position of the given character in the string, and then uses the `substr` method to extract the substring from the original string. If the character is not found, it returns an empty string.

