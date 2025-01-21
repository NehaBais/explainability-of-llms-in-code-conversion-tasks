The error occurs because there is no main function defined, which is the entry point of any C++ program. In order to fix this problem, you need to define a main function. Here's how the corrected version of your code looks like:

```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b) { 
  cout << "a and b: " << (a & b) << endl;
  cout << "a or b: " << (a | b) << endl;
  cout << "a xor b: " << (a ^ b) << endl;
  cout << "not a: " << (~a) << endl;

  cout << "a << n: " << (a << b) << endl; 
  cout << "a >> n: " << (a >> b) << endl;
  unsigned int c = a;
  cout << "c >> b: " << (c >> b) << endl;
}

int main() {
    bitwise(10, 2); // put your own values here.
    return 0;
}
```
