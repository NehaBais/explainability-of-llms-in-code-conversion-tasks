The error message is: "use of undeclared identifier 'std' and a type specifier is required for all declarations". 

In C++, to use `string` as a variable, we need to include the `iostream` library which provides input/output facilities for string manipulation.
```cpp
#include <iostream>
using namespace std;
int main() {
  string str = "def";
  cout << "Original String is: " << str << endl;
  str = "abc" + str;
  cout << "String after concatenation is: " << str << endl;
  return 0;
}
```
In this corrected code, we have included the necessary library for string handling and used `cout` to print the result. The `<<` operator is used for output, which in this case, concatenates the result of the concatenation with a string literal "String after concatenation is: ". Finally, we use the return statement at the end of the program to exit cleanly.
