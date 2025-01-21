Here is the equivalent C++ code for your request:

```c++
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    cout << a << " + " << b << " = " << (a+b) << endl;
    cout << a << " - " << b << " = " << (a-b) << endl;
    cout << a << " * " << b << " = " << (a*b) << endl;
    
    // Division rounds towards zero, same as in Go
    cout << a << " / " << b << " = " << (int)(a/b) << endl;

    // Remainder has the sign of the first operand, like in Go
    cout << a << " % " << b << " = " << (a%b) << endl;

    // No exponentiation operator
    return 0;
}
```

The difference between C++ and Go is that C++ does not support formatted input/output as Go does (`fmt.Print` and `fmt.Scanln`). Instead, we use `cin` and `cout` for getting user inputs and displaying outputs respectively. The explicit type casting `(int)` is used for integer division in C++.
