Sure, the converted code in C++ would look like this:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Create a string variable and assign it any text value
  string str = "Good Morning"; 

  // Append another string literal to the string variable using the most idiomatic C++ method.
  str += " to all";
  cout << str;
  return 0;
}
```
In this code, we are declaring a `string` data type which is a sequence of characters terminated by null character ('\0'). We also include the library `iostream` for input and output operations in C++. The `+=` operator allows us to append string variables together without needing to manually calculate the length or reallocating memory, thus providing more robustness and efficiency in C++ than the traditional `strcat()` method would allow in C.
