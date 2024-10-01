In C++, you can use the `std::string` class to represent a string, and its member functions such as `substr()` to extract substrings. Here is an example of how you could implement the given code in C++:
```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index n (c文字)
    cout << s.substr(n, m) << endl;

    // Print all characters starting at index n (c文字化けdef)
    cout << s.substr(n) << endl;

    // Print all characters except the last (abc文字化けde)
    string rev = s.substr(0, s.size() - 1);
    cout << rev << endl;

    // Print 3 characters starting with 'b' (bc文)
    int cpos = s.find('b');
    cout << s.substr(cpos, m) << endl;

    // Print 3 characters starting with "けd" (けde)
    int spos = s.find("けd");
    cout << s.substr(spos, m) << endl;

    return 0;
}
```
Note that in C++, the `std::string` class is used to represent strings, and its member functions such as `substr()` are used to extract substrings. The `find()` function is used to find the position of a substring within a string, and the `size()` function is used to get the length of a string.
