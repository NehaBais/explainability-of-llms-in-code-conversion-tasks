Here's the equivalent C++ code for the given Python code:
```
#include 
using namespace std;
int main() {
 string extra = "little";
 string new_str = "Mary had a " + extra + " lamb.";
 cout << new_str << endl;
 return 0;
}
```
In this C++ code, we first declare and initialize the `extra` variable with the value "little". Then, we create a new string `new_str` by concatenating the existing string "Mary had a ", the value of the `extra` variable, and the string ". This is done using the `+` operator. Finally, we print out the value of `new_str`.

