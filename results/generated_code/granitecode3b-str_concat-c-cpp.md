Sure! Here's the C++ code that accomplishes the same task:
```
#include 
using namespace std;

string sconcat(string s1, string s2) {
 return s1 + s2;
}

int main() {
 string s = "hello";
 string s2 = sconcat(s, " literal");
 cout << s << endl; // prints "hello" literal
 cout << s2 << endl; // prints "hello literal"
 return 0;
}
```
In this code, we define a `string` variable `s` and initialize it with the value `"hello"`. We then call the `sconcat()` function to concatenate `s` with the string literal `" literal"` and store the result in another `string` variable `s2`. Finally, we print the values of `s` and `s2` to verify that the concatenation worked correctly.

