Below is the equivalent C++ code:

```cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: program <a> <b>" << endl;
        return -1;
    }

    try {
        int a = stoi(argv[1]);  // Parse string to integer
        int b = stoi(argv[2]);

        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;
        cout << "a / b = " << a / b << endl;  // This will result in an integer division. The quotient is rounded towards zero. 
        // If you want to get the quotient by using division, then you should do type casting: (double)a/b
        cout << "a % b = " << a % b << endl;  

        // Exponentiation operator exists in C++, so you can use it to calculate exponents. 
        // For example: 2^3 = 8 and 10^(-2) = 0.01
        // Note that this will not work with float/double types, as they have limited precision.

        return 0;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return -1;
    }
}
```
