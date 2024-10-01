Here's the C++ code that accomplishes the same task:
```
#include 
using namespace std;
int main() {
 string s = "hello";
 string t = s + " there!";
 cout << s << endl;
 cout << t << endl;
 return 0;
}
```
The output of this code will be:

hello
hello there!

As you can see, the `+` operator is overloaded for strings in C++, so we can concatenate two string literals using the `+` operator. The resulting concatenated string is stored in a new string variable called `t`.

