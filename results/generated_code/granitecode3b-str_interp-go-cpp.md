Here's the equivalent C++ code for the given Golang code:
```
#include 
#include 
using namespace std;
int main() {
 string str = "Mary had a %s lamb";
 string txt = "little";
 string out = str.replace("%s", txt);
 cout << out << endl;
 return 0;
}
```
In C++, we use the `std::string` class to store strings, and we can use the `replace()` function of the `string` class to replace a substring in the original string with another substring. In this case, we're replacing "%s" with the value of the `txt` variable. Finally, we print the resulting string using `cout`.

