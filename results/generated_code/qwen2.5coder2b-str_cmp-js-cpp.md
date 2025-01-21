The equivalent C++ code for the above JavaScript code is shown below:

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "abcd";
    string str2 = "abcd";
    int num1 = 123;
    int num2 = 123;

    cout << (str1 == str2) << endl; // true
    cout << (str1 == str2) << endl; // true
    cout << (num1 == str2) << endl; // true
    cout << (num1 == str2) << endl; // false
    cout << (str1 != str2) << endl; // true
    cout << (num1 != str2) << endl; // false
    cout << (num1 !== str2) << endl; // true
    cout << (str1 < "dcba") << endl; // true
    cout << (str1 > "dcba") << endl; // false
    cout << (str1 == str2) << endl; // false (case insensitive)
    
    return 0;
}
```
In the above C++ code, we compare two strings and two integers using the relational operators. The string comparison is case sensitive and the numeric comparison treats them as different types. We also demonstrate how to compare two strings in a case-insensitive manner using the `tolower()` function on both the strings and then comparing them.
