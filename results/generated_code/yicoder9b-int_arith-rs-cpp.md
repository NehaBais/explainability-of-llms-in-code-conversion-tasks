The C++ code to perform the same operations is given below. Note that there's no direct equivalent of `unwrap()` in Rust on C++, so we handle errors using exceptions:

```cpp
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) throw runtime_error("You must provide exactly two command-line arguments.");

    char* endptr;
    long a = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || a < INT32_MIN || a > INT32_MAX) throw runtime_error("The first command-line argument is not a valid integer.");

    long b = strtol(argv[2], &endptr, 10);
    if (*endptr != '\0' || b < INT32_MIN || b > INT32_MAX) throw runtime_error("The second command-line argument is not a valid integer.");

    cout << "sum:              " << (a + b) << endl;
    cout << "difference:       " << (a - b) << endl;
    cout << "product:          " << (a * b) << endl;
    if (b == 0) {
        throw runtime_error("Cannot compute quotient or remainder when the second number is zero.");
    }
    else {
        cout << "integer quotient: " << (a / b) << " // truncates towards zero"  << endl;
        cout << "remainder:        " << (a % b) << " // same sign as the first operand" << endl; 
    }       
    return 0;
}
```
