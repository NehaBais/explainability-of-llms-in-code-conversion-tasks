Here's the equivalent C++ code that meets the requirements of the given Java code:
```c++
#include 
using namespace std;
int main() {
 bool a, b;
 cout << "Enter two boolean values (0 or 1): ";
 cin >> a >> b;
 cout << "a AND b: " << (a && b) << endl;
 cout << "a OR b: " << (a || b) << endl;
 cout << "NOT a: " << (!a) << endl;
 return 0;
}
```
In this C++ code, we first prompt the user to enter two boolean values (0 or 1) using `cout` and `cin`. We then use the logical operators `&&` (and), `||` (or), and `!` (not) to perform the required operations on the two input values and print the results using `cout`. The output will display the result of "and", "or", and "not" on both arguments.

