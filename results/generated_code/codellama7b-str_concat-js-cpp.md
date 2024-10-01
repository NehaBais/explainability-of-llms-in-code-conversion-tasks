```cpp
#include <iostream>
using namespace std;
int main() {
    string s = "hello";
    string t = s + " there!";
    cout << s << endl;
    cout << t << endl;
}
```
Explanation:

* In JavaScript, we use the `var` keyword to declare a variable. The type of the variable is inferred based on the initialization value. In this case, the variable `s` is initialized with the string value "hello", so its type is also a string.
* We can concatenate two strings by using the `+` operator. In C++, we use the `+=` operator to assign a new value to a variable. So, in order to concatenate two strings, we need to use the `+=` operator.
* The `print()` function is used to print the values of variables or expressions to the console. In C++, we use `cout` for this purpose, as it is more efficient and provides more control over the output.
* The first line of code prints the value of the variable `s` to the console using the `cout` statement.
* The second line of code concatenates the string value " there!" with the variable `s` and assigns the result to a new variable `t`. It then prints the value of `t` to the console using the `cout` statement.
* The output of the program should be:

hello
hello there!

