Here's your Python code converted into C++. Note that C++ standard input/output functions are used instead of Python's built-in `input` function. 

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    if (a < b) {
        cout << "a is less than b" << endl;
        } else if (a > b) {
        cout << "a is greater than b" << endl;
         } else if (a == b) {
        cout << "a is equal to b" << endl;
        }

    return 0;
}
```
This code will prompt the user for two integer inputs. It then compares these integers and prints out an appropriate message based on which of the three conditions (first integer less than, first integer greater than, or first integer equal to second integer) is true.
