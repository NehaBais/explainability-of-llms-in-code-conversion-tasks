Here's how you can convert this JavaScript code to C++:
```c++
#include <iostream>
using namespace std;

void compare(int a, int b) {
  if (a == b)
    cout << a << " equals " << b;
  else if (a < b)
    cout << a << " is less than " << b;
  else
    cout << a << " is greater than " << b;
}

int main() {
  int a, b;

  // Get two integers from the user
  cout << "Enter first integer: ";
  cin >> a;
  
  cout << "Enter second integer: ";
  cin >> b;

  compare(a, b);

  return 0;
}
```
This C++ code does exactly what your JavaScript code is doing. It gets two integers from the user and compares them using three comparison operators (==, <, >). If one of the comparison is true, it prints out a message accordingly.

It should be noted that in the main function, we're including `<iostream>` for input/output operations and `using namespace std;` to simplify the code.
