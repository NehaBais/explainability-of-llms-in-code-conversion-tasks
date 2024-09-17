Sure! Here's the C++ code that meets your requirements:
```
#include 
using namespace std;
 
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 
 if (a < b) {
 cout << a << " is less than " << b << endl;
 }
 else if (a == b) {
 cout << a << " is equal to " << b << endl;
 }
 else {
 cout << a << " is greater than " << b << endl;
 }
 
 return 0;
}
```
This code uses the `cin` function to take input from the user, and then uses three `if` statements to compare the values of `a` and `b`. The `else if` statement is used instead of two separate `if` statements to check for multiple conditions. Finally, the result of the comparison is printed out using the `cout` function.

