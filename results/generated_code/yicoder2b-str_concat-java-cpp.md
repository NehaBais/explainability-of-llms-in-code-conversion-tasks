Sure, here is the equivalent C++ code for your Java code:

```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "hello"; 
    cout << s << " literal" << endl;
    string s2 = s + " literal";
    cout << s2 << endl;
    return 0;
}
```
This C++ program does the same thing as your Java program. It first declares a string variable `s` and assigns it a value of "hello". Then, it prints out the contents of `s` followed by another string literal " literal". After that, it declares another string variable `s2`, which is the concatenation of the original string `s` and " literal". It then prints out the contents of this new string (`s2`).
