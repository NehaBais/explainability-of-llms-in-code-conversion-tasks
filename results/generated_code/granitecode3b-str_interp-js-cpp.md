Here's the equivalent C++ code for the given JavaScript code:
```c++
#include 
using namespace std;
int main() {
 string original = "Mary had a X lamb";
 string little = "little";
 
 // String interpolation using the replace function in C++
 string replaced = original.replace(original.find("X"), 1, little);
 
 cout << "Original string: " << original << endl;
 cout << "Replaced string: " << replaced << endl;
 
 return 0;
}
```
In this C++ code, we first define the original string and the value to be replaced. We then use the `replace` function from the `` library to replace the character sequence "X" with the value of `little`. The `find` function is used to find the index of the character sequence "X", and the second argument specifies the number of characters to be replaced. Finally, we print out both the original and replaced strings using the `cout` statement.

