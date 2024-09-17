Here is the converted code from Golang to C++:
```c++
#include 
#include 
using namespace std;
int main() {
 int n1, n2;
 cout << "Enter number: ";
 cin >> n1;
 cout << "Enter number: ";
 cin >> n2;
 switch (true) {
 case n1 < n2:
 cout << n1 << " is less than " << n2 << endl;
 break;
 case n1 == n2:
 cout << n1 << " is equal to " << n2 << endl;
 break;
 case n1 > n2:
 cout << n1 << " is greater than " << n2 << endl;
 break;
 }
 return 0;
}
```
Test cases for each condition:
- less than: -5, 3
- equal to: 7, 7
- greater than: 9, -3

