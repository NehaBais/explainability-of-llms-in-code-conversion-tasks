```cpp
#include<iostream>
using namespace std;

int main()
{
   int a, b;
   
   cout << "Enter value of a: ";
   cin >> a;
   
   cout << "Enter value of b: ";
   cin >> b;
   
   if(a < b) {
      cout << "a is less than b" << endl;
   }
   else if(a > b) {
      cout << "a is greater than b" << endl;
   }
   else {
      cout << "a is equal to b" << endl;
   }

   return 0;
}
```
This C++ code does the same thing as your Python code. It asks for two integers from the user, compares them using the less-than, greater-than and equal-to operators and prints an appropriate message.
