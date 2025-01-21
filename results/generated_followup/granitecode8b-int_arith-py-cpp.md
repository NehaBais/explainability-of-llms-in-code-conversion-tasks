The error in the given code is that it uses Python-style input and output statements (`input()` and `print()`) instead of C++-style input and output statements (`cin` and `cout`). The fix is to replace all instances of `input()` and `print()` with `cin` and `cout`, respectively.

Here is the corrected code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int input1, input2;
    cin >> input1 >> input2;

    int sum = input1 + input2;
    cout << "Sum:                   " << sum << endl;

    int difference = input1 - input2;
    cout << "Difference:    " << difference << endl;

    int product = input1 * input2;
    cout << "Product:       " << product << endl;

    float quotient = static_cast<float>(input1) / static_cast<float>(input2);
    cout << "Quotient:      " << quotient << endl;

    return 0;
}
```

