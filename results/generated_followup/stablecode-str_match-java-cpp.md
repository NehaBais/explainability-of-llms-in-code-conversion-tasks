Error: "expected ';' after expression"

Fix: In the last line, we need to use `std::string` method `compare()` correctly in order to avoid compilation errors. 

Corrected code:
```cpp
#include 
#include 
using namespace std;
int main() {
    string str1 = "abcd";
    string str2 = "ab";

    bool checkStartsWith = str1.compare(0, 2, str2) == 0;
    cout << "\"abcd\".startsWith(\"ab\")) //returns \"" << boolalpha << checkStartsWith << "\n";

    str2 = "zn";
    checkStartsWith = str1.compare(str1.length()-str2.length(), str2.length(), str2)) == 0;
    cout << "\"abcd\".endsWith(\"zn\")) //returns \"" << boolalpha << checkStartsWith << "\n";

    str1 = "abab";
    str2 = "bb";
    checkStartsWith = str1.find(str2) != std::string::npos;
    cout << "\"abab\".contains(\"bb\")) //returns \"" << boolalpha << checkStartsWith << "\n";

    int loc = -1;
    loc = str1.find("ab", loc + 1));
    cout << "\"abab\".indexOf(\"ab\", " << loc << ")) //returns [\"" << loc << "\"]\n";

    return 0;
}
```
