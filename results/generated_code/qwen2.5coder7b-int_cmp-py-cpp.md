Here's how you can convert the Python code into C++.

```c++
#include<iostream>
using namespace std;

int main() {
   int a, b;
   cout << "Enter value of a: ";
   cin >> a;
   cout << "Enter value of b: ";
   cin >> b;

   if (a < b) {
      cout << "a is less than b" << endl;
   }
   else if (a > b) {
      cout << "a is greater than b" << endl;
   }
   else {
      cout << "a is equal to b" << endl;
   }

   return 0;
}
```

In this C++ code, `cin` is used instead of `input()` for getting user input. Also, we need a semicolon (`;`) at the end of each line and curly brackets `{}` for defining the scope of the if-else block. All `print` statements in Python are replaced with `cout`. The comparison operators `<`, `>`, and `==` work the same way as in Python.
