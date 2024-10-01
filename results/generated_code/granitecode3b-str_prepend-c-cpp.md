Sure, here's the C++ code that accomplishes the same task:
```
#include 
using namespace std;
int main() {
 string str = "my String";
 string cstr = "Changed ";
 string dup = str;
 str = cstr + dup;
 cout << str << endl;
 return 0;
}
```
Note that in C++, we use the `string` class to store strings, and we don't need to manually allocate memory for it. Also, we use the `+` operator to concatenate strings in C++.

