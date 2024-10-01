Sure! Here's the C++ code that accomplishes the same thing as the Rust code:
```cpp
#include 
#include 
using namespace std;
int main() {
 string s = "hello";
 cout << s << endl;
 
 string s1 = s + " world";
 cout << s1 << endl;
 
 return 0;
}
```
In this C++ code, we first create a string variable `s` and assign it the value "hello" using the `to_string()` function. We then print out the value of `s` using the `cout` statement.
Next, we create another string variable `s1` by concatenating the value of `s` with the string literal " world" using the `+` operator. We then print out the value of `s1` using the `cout` statement.
Finally, we return 0 from the `main()` function to indicate that the program has executed successfully.

