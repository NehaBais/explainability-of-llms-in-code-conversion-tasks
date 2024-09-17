 ```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    if (argc < 3) exit(-1);
    a = atoi(argv[--argc]);
    b = atoi(argv[--argc]);
    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    if (b == 0) {
        cout << "a/b = undefined" << endl;
        cout << "a%%b = undefined" << endl;
    } else {
        int quotient = a / b; // truncates towards 0 by default in C++14, unlike in C99.
        int remainder = a % b; // same sign as first operand by default in C++, unlike in C99.
        cout << "a/b = " << quotient << endl;
        cout << "a%%b = " << remainder << endl;
    }
    return 0;
}
```
