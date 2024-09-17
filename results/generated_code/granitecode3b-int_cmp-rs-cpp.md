Sure, here's the C++ code that accomplishes the same task:
```c++
#include 
#include 
using namespace std;
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 if (a < b) {
 cout << a << " is less than " << b << endl;
 } else if (a == b) {
 cout << a << " equals " << b << endl;
 } else {
 cout << a << " is greater than " << b << endl;
 }
 return 0;
}
```
This code uses the `cin` function to read two integers from the user, and then uses an `if-else if-else` statement to check which condition is true. The output is displayed using the `cout` function.

