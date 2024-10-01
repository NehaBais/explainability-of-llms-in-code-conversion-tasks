The equivalent code in C++ is as follows:
```cpp
#include <iostream>
using namespace std;
int main() {
    string s1 = "Hello";
    s1 += ", World!";
    cout << s1 << endl;
    return 0;
}
```
This is the simplest way to achieve the same result. The `+=` operator appends one string to another in C++. The `<<` operator prints the contents of a variable or expression. In this case, it's used with the `cout` object to print the value of `s1`. The `endl` is used to insert a newline character at the end of the output.
Here's the breakdown of the code:
- `#include <iostream>` includes the necessary headers for input/output operations.
- `using namespace std;` is a shorthand notation for using the `std` namespace.
- The `main()` function serves as the entry point to our program.
- The declaration of `s1` as a string variable with initial value "Hello".
- The assignment operator `+=` appends ", World!" to `s1`.
- Finally, we print the final value of `s1` using the `cout` object and the `<<` operator.
The output will be: "Hello, World!".
