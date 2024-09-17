Here's the converted code from JavaScript to C++:
```
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
This code prompts the user to enter two integers, reads them in using `cin`, and then uses an `if` statement with three conditions to compare the two numbers. The first condition checks if `a` is less than `b`, the second condition checks if `a` is equal to `b`, and the third condition checks if `a` is greater than `b`. If any of these conditions are true, it prints a message indicating which comparison is true.
Note that this code assumes that the user will enter valid integer inputs. It also uses standard input and output functions (`cin` and `cout`) instead of type coercion to ensure compatibility with different programming environments.

