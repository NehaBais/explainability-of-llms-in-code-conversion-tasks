### Answer
#### C++ Code:
```cpp
#include <iostream>
#include <string>
using namespace std;
void compare(const string& a, const string& b) {
    cout << "Comparing strings..." << endl;
    if (a == b) {
        cout << "'" << a << "' is equal to '" << b << "'." << endl;
    } else {
        cout << "'" << a << "' is not equal to '" << b << "'." << endl;
    }
}
void compare(int a, int b) {
    cout << "Comparing integers..." << endl;
    if (a == b) {
        cout << a << " is equal to " << b << "." << endl;
    } else {
        cout << a << " is not equal to " << b << "." << endl;
    }
}
void compare(double a, double b) {
    cout << "Comparing doubles..." << endl;
    if (a == b) {
        cout << a << " is equal to " << b << "." << endl;
    } else {
        cout << a << " is not equal to " << b << "." << endl;
    }
}
int main() {
    string s1 = "YUP";
    string s2 = "YUP";
    compare(s1, s2);
    string s3 = "BALL";
    string s4 = "BELL";
    compare(s3, s4);
    int i1 = 5;
    int i2 = 7;
    compare(i1, i2);
    double d1 = 3.14;
    double d2 = 3.14;
    compare(d1, d2);
    return 0;
}
```
