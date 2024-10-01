Here's the C++ code that accomplishes the same task:
```
#include 
using namespace std;
int main() {
 string s = "hello";
 cout << s + " literal" << endl;
 string s2 = s + " literal";
 cout << s2 << endl;
 return 0;
}
```
This code defines a string variable `s` with the value "hello", then uses the `+` operator to concatenate it with the string literal "literal". The result is stored in another string variable `s2`. Finally, the code prints out the content of both variables using `cout`.

