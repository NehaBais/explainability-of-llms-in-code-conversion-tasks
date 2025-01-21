The error occurred because the Golang code was not compiled with the `-std=c++11` flag. The C++ standard requires that all identifiers used in an implementation must be declared before they are used, and the `using namespace std;` statement is a declaration of the `std::` namespace. Additionally, the Golang code uses `fmt.Scan()` to read input from the console, which is not available in C++.
The fix is to compile the Golang code with the `-std=c++11` flag, which adds support for C++11 features such as variable-length arrays and improved I/O operations.
Here's the corrected code in a single fenced code block:
```cpp
#include 
using namespace std;
int main() {
  int n1, n2;
  cout << "Enter number: ";
  cin >> n1;
  cout << "Enter number: ";
  cin >> n2;
  if (n1 < n2) {
    cout << n1 << " is less than " << n2 << endl;
  } else if (n1 == n2) {
    cout << n1 << " is equal to " << n2 << endl;
  } else {
    cout << n1 << " is greater than " << n2 << endl;
  }
  return 0;
}
``` 
The corrected code uses the `std::` namespace, which provides access to the C++ standard library. It also uses the `cin` and `cout` objects instead of `fmt.Scan()` and `fmt.Println()`, respectively, which are not available in Golang. Additionally, it uses `if-else` statements for conditional branching instead of a switch statement.

