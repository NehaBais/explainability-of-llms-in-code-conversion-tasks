Sure! Here's the equivalent C++ code for the given Golang code:
```c++
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
This code uses a `switch` statement to compare the two integers and display a message based on which one is greater, equal, or lesser. The condition for each case is tested separately using the `case` keyword.

