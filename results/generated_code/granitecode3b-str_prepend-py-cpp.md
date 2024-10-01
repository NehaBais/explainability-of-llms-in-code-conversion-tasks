Here's the C++ code that accomplishes the same task as the given Python code:
```c++
#include 
using namespace std;
 
int main() {
 string s = "12345678";
 string new_s = "0" + s; // by concatenation
 cout << new_s << endl;
 return 0;
}
```
The C++ code defines a string variable `s` and assigns it the value of the string literal `"12345678"`. It then creates a new string variable `new_s` by concatenating the string literal `"0"` with the value of `s` using the `+` operator. Finally, it prints the value of `new_s` to the console using `cout`.

