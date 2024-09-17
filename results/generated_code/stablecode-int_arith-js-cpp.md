Below is the equivalent C++ code for your JavaScript code:

```cpp
#include <iostream>
using namespace std;

int main() {

    // Invoked as ./script_name <a> <b>. Positions 0 and 1 in the argv array contain 'node' and 'script_name.js' respectively
    int a = stoi(argv[2]));
    int b = stoi(argv[3]));

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    // For division, in C++, the division of two integers results in a floating-point number (also called a 'double') that can represent the exact quotient. Therefore, there isn't need for any specific rounding.

    cout << "a + b = %d" << sum << endl; // The %d syntax is a placeholder that is replaced by the sum
    cout << "a - b = %d" << difference << endl;
    cout << "a * b = %d" << product << endl;

    return 0;
}
```
Note: This C++ code assumes that you are running this script on a Unix-like operating system (like Linux or MacOS). If you're using a different OS, you'll need to adjust the command line arguments (the `argv` array) accordingly.
