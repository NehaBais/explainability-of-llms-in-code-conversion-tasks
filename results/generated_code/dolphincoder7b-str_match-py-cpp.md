This is the Python code:

def starts_with(str1, str2):
    if len(str1)<len(str2):
        return False
    for i in range(0, len(str2)):
        if str1[i] != str2[i]:
            return False
    return True

def contains(str1, str2):
    return str2 in str1

def ends_with(str1, str2):
    return str1[-len(str2):] == str2

This is the C++ code:
```cpp
#include <iostream>
#include <string>
using namespace std;
bool starts_with(const string& str1, const string& str2) {
    if (str1.size()<str2.size())
        return false;
    for (int i=0;i<str2.size();i++) {
        if (str1[i]!=str2[i])
            return false;
    }
    return true;
}
bool contains(const string& str1, const string& str2) {
    return str2.find(str1)!=string::npos;
}
bool ends_with(const string& str1, const string& str2) {
    if (str1.size()<str2.size())
        return false;
    for (int i=0;i<str2.size();i++) {
        if (str1[str1.size()-str2.size()+i]!=str2[i])
            return false;
    }
    return true;
}
int main() {
    string str1 = "abcd";
    string str2 = "ab";
    cout << starts_with(str1, str2) << endl;  //returns True
    cout << ends_with(str1, str2) << endl;  //returns False
    cout << contains(str1, str2) << endl;    //returns True
    return 0;
}
```
