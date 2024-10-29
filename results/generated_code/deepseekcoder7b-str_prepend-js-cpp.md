In C++, strings are mutable and do not have an in-built append or prepend operation like the JavaScript version. So, you'll need to create a new string that includes the prefix at the beginning of the original string. Here is how it could be done:

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Creating a string variable equal to any text value.
    string s = ", World";
    
    // Prepending the string with another string literal.
    string prependString = "Hello";
    s = prependString + s;
 
    cout << s;
  
    return 0;
}
```
In this code, `s` is initialized to ", World". The value of `prependString` is "Hello", and when you add them together (`s = prependString + s`), it yields "Hello, World", which then gets printed out.

