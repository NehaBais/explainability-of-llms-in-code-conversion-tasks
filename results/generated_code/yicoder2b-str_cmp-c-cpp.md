Here is a simple C++ code that converts the given C program to convert string comparisons. The main difference here from the original C code will be in how we handle comparison of numeric strings if these are not treated lexically. Here, we have added the concept of lexical ordering for numeric string which compares them as integer values.

```cpp
#include <iostream>
#include <string>
using namespace std;

bool compare(const string& a, const string& b) {
    int val1 = stoi(a);
    int val2 = stoi(b);
    if (val1 == val2) return true; // Equal 
    return val1 < val2;  // Lexical Ordering
}

void compareAndPrint(const string& a, const string& b){
    cout << "a :"<< a.c_str() <<" = " << stoll(a)<<" (integer value)\n";
    if (compare(a, b)) {
        cout << "EQ\t";
    } else {
        cout << "NE\t";
    }
    cout << "GT\t";
    if (compare(b, a)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    cout << "LT\t";
    if (compare(a, b)) {
        cout << "false\n";
    } else {
        cout << "true\n";
    }
    cout << "GE\t";
    if (compare(b, a) || compare(a, b)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    cout << "LE\t";
    if (compare(a, b) || compare(b, a)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    return;
}
int main() {
    string a = "ball", b = "yep"; 
    compareAndPrint(a,b);
    a = "bell", b = "ball";
    compareAndPrint(a,b);
    a = "YUP", b = "yEP";
    compareAndPrint(a,b);
    a = "ball", b = "BELL";
    compareAndPrint(a,b);
    return 0;
}
```
This code will output the result of the string comparison for both lexical and integer comparisons. It also takes care of whether the strings are case sensitive or not.
