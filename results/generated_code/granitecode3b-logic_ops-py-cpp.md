Here's the C++ code that performs the same functionality as the Python function:
```c++
#include 
using namespace std;
int main() {
    bool a, b;
    cout << "Enter values for a and b (0 or 1): ";
    cin >> a >> b;
    cout << "a and b: " << (a && b) << endl;
    cout << "a or b: " << (a || b) << endl;
    cout << "not a: " << (!a) << endl;
    return 0;
}
```
This C++ code prompts the user to enter values for `a` and `b`, which are stored in boolean variables. The `&&` operator is used to perform the "and" operation on `a` and `b`, and the `||` operator is used to perform the "or" operation. The `!` operator is used to perform the "not" operation on `a`.

