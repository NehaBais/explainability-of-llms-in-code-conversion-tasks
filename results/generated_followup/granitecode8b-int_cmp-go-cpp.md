The error message indicates that there are multiple issues with the code. The first error is that the include statements for io and log are missing the angle brackets. The second error is that the using directive for the std namespace is not allowed in C++. The third error is that the cout and cin statements are not declared. Finally, the fourth error is that the switch condition is not a constant expression.
To fix these errors, you need to add the necessary include statements, remove the using directive, declare the cout and cin statements, and change the switch condition to a constant expression. Here is the corrected code:
```cpp
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

