Here is the C++ code that accomplishes the same task as the given Golang code:
```c++
#include 
using namespace std;
 
int main() {
    // text assigned to a string variable
    string s = "hello";

    // output string variable
    cout << s << endl;

    // concatenate variable and literal, assign result to another string variable
    string s2 = s + " literal";

    // output second string variable
    cout << s2 << endl;

    return 0;
}
```
In this C++ code, we first declare a `string` variable `s` and assign it the value of "hello". We then use `cout` to print out the value of `s`.
Next, we concatenate the string variable `s` with the literal string "literal" using the `+` operator. This results in a new string variable `s2` that contains the concatenated value. We then use `cout` again to print out the value of `s2`.

