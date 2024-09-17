Below is the equivalent C++ code for the Java code you provided:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "a + b = " << a+b << endl;     // The result of adding 'a' and 'b'
    cout << "a - b = " << a-b << endl;     // The result of subtracting  'b' from  'a'
    cout << "a * b = " << a*b << endl;      // The result of multiplying  'a' and  'b'
    cout << "a / b = " << a/b << endl;       // The result of dividing  'a' by  'b' (Note: division does not contain the fractional result)
    cout << "remainder of a / b = " << a%b << endl;     // The remainder of dividing  'a' by  'b'

    return 0;
}
```
Note that in C++, it's not recommended to use global variables, instead we'll pass the values to functions. Also, C++ does not support command line arguments directly from the main function like Java does. So, for this code, you would need to implement a way to read the inputs at the start of the program and then pass them into the functions.
