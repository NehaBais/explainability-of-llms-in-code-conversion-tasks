Sure, the equivalent C++ code would be as follows: 

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b){
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << !a << endl;
}
int main() {
   bool a = true, b = false;
   logic(a,b);
   return 0;
}
```
This C++ code does exactly the same as your java code. It takes two boolean values and performs logical operations on them. Then it performs not operation on first argument `a`. The `main()` function is just for testing purpose.
