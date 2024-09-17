 The JavaScript code you provided can't be converted to C++ because unlike JavaScript, C++ doesn't natively support input/output operations or comparisons between types. Here is a simple C++ equivalent that gets two integers from the user and then compares them using if-else constructs:

```cpp
#include <iostream>
using namespace std;
int main() {
    int num1, num2; 
    
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    if(num1 == num2) {
        cout << num1 << " equals " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " is greater than " << num2 << endl;
    } 
    
    return 0;
}
```
Remember, this code assumes that both inputs are integers. If this isn't the case, you might have to add error checking or conversion logic for handling non-integer input.
