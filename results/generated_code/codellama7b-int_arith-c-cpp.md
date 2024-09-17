 Here is the converted code in C++:
```
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    if (argc < 3) exit(1);
    b = atoi(argv[--argc]);
    if (b == 0) exit(2);
    a = atoi(argv[--argc]);
    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    cout << "a/b = " << a / b << endl; // truncates towards 0 (in C99)
    cout << "a%b = " << a % b << endl; // same sign as first operand (in C99)
    return 0;
}
```
Explanation:

1. The `iostream` header is included to provide input/output streams for `cout`.
2. The `cstdlib` header is included to provide the `atoi()` function for converting strings to integers.
3. The `using namespace std;` statement is used to bring the standard library into scope, making it easier to use functions like `atoi()`.
4. The code is mostly the same as the original C code, with a few minor changes:
	* The `printf()` statements are replaced with `cout` statements to display output.
	* The `%d` format specifier for integers is replaced with `<<` operators to insert the values into the stream.
	* The `atoi()` function is used to convert the command-line arguments to integers.
5. The only change from the original C code is the use of `cout` instead of `printf()` for output, which is a more modern and more versatile way to handle output in C++.
