Here is the converted code from Python to C++ that meets the given requirements:
```
#include 
#include 
using namespace std;
int main() {
 string s = "12345678";
 s = "0" + s; // by concatenation
 cout << s << endl;
 return 0;
}
```
In this code, we first include the necessary headers for input/output and string manipulation. We then declare a string variable `s` and initialize it with the value `"12345678"`. We prepend the string variable with another string literal by concatenating it with `"0"`. Finally, we print the resulting string using the `cout` statement.

