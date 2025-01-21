The C code you provided can be converted to C++ with only minor adjustments. Here's the equivalent C++ version of your code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a < b)
        cout << a << " is less than " << b << endl;

    if (a == b)
        cout << a << " is equal to " << b << endl;

    if (a > b)
        cout << a << " is greater than " << b << endl;

    return 0;
}
```

### Explanation:
1. **Input Output Stream**: In C++, we use `cin` and `cout` instead of `scanf` and `printf`.
2. **Namespace**: The `using namespace std;` directive allows us to directly use `cin` and `cout` without specifying the `std::` prefix.
3. **Output Formatting**: Use `<<` for outputting strings and variables, and `endl` to insert a newline character.

This C++ code will achieve the same functionality as your original C code: it will compare two integers entered by the user and display appropriate messages based on whether the first integer is less than, equal to, or greater than the second integer.
